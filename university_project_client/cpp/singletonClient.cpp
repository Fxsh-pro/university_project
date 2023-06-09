#include "h/singletonClient.h"
#include "h/bigprimegenerator.h"

unsigned long long int SingletonClient::p, SingletonClient::q, SingletonClient::n, SingletonClient::t, SingletonClient::e, SingletonClient::d;

SingletonClient::SingletonClient(QObject *parent) : QObject(parent){
    // Cоздание открытого и секретного ключей

    long long int p = BigPrimeGenerator::getBigPrime(), q = BigPrimeGenerator::getBigPrime();

    // 1. Выбираются два различных случайных простых числа p и q заданного размера
    this->p = p;
    this->q = q;

    // 2. Вычисляется их произведение n = p ⋅ q, которое называется модулем.
    this->n = this->p * this->q;

    // 3. Вычисляется значение функции Эйлера от числа n: φ(n) = (p−1)⋅(q−1)
    this->t = (this->p - 1) * (this->q - 1);

    // 4. Выбирается целое число e ( 1 < e < φ(n) ), взаимно простое со значением функции Эйлера (t)
    //	  Число e называется открытой экспонентой
    this->e = RSA::calculateE(this->t);

    // 5. Вычисляется число d, мультипликативно обратное к числу e по модулю φ(n), то есть число, удовлетворяющее сравнению:
    //    d ⋅ e ≡ 1 (mod φ(n))
    this->d = RSA::calculateD(this->e, this->t);


    // 6. Пара {e, n} публикуется в качестве открытого ключа RSA

    // 7. Пара {d, n} играет роль закрытого ключа RSA и держится в секрете
    mTcpSocket = new QTcpSocket(this);
    mTcpSocket -> connectToHost("127.0.0.1",33333);
    connect(mTcpSocket, &QTcpSocket::readyRead,
            this, &SingletonClient::slotServerRead);
    send_msg_to_server("send_to_server_public_keys#" + SingletonClient::getClientPubKeys());

    QList<QByteArray> keys1 = SingletonClient::getClientPubKeys().split('#');
    QList<QByteArray> keys2 = SingletonClient::getClientPrKeys().split('#');

    qDebug() << RSA::decrypt(RSA::encrypt("jhavdjAVDSAFV", keys1[0].toLong(), keys1[1].toLong()), keys2[0].toLong(), keys2[1].toLong());
}

SingletonClient* SingletonClient::getInstance(){
    if (!p_instance)
        {
            p_instance = new SingletonClient();
            destroyer.initialize(p_instance);
        }
    return p_instance;
}

void SingletonClient::send_msg_to_server(QString query){
    mTcpSocket->write(query.toUtf8());
}

void SingletonClient::slotServerRead(){
    QString msg = "";
    while(mTcpSocket->bytesAvailable()>0)
    {
        msg.append(mTcpSocket->readAll());
        if(msg.right(1) == "\n")
            break;
    }
    qDebug()<<msg;
    QStringList answer = msg.split("#");

    if(answer[0] == "auth+")
        emit auth_ok(answer[1]);
    else if (answer[0] == "auth-")
    {
        emit auth_invalid();
    }
    else if (answer[0] == "change_pass+")
    {
        emit change_pass_ok();
    }
    else if (answer[0] == "send_to_client_public_keys")
    {
        this->server_public_keys.append(answer[1].toUtf8());
        this->server_public_keys.append(answer[2].toUtf8());
    }
}

SingletonClient::~SingletonClient(){
    mTcpSocket->close();
};

QByteArray SingletonClient::getClientPubKeys() {
    return QByteArray::number(SingletonClient::e) + "#" + QByteArray::number(SingletonClient::n);
}

QByteArray SingletonClient::getClientPrKeys() {
    return QByteArray::number(SingletonClient::d) + "#" + QByteArray::number(SingletonClient::n);
}

SingletonClient* SingletonClient::p_instance;
SingletonDestroyer SingletonClient::destroyer;
