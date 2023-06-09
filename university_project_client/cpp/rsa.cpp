#include "D:\\BACKUP\Education\Education2\Prog\university_project\university_project_client\h\rsa.h"

RSA::RSA(unsigned long long int p, unsigned long long int q) {


    memset(encryptedText, 0, sizeof(encryptedText));

    memset(decryptedText, 0, sizeof(decryptedText));

    // Cоздание открытого и секретного ключей

    // 1. Выбираются два различных случайных простых числа p и q заданного размера
    this->p = p;
    this->q = q;

    // 2. Вычисляется их произведение n = p ⋅ q, которое называется модулем.
    this->n = this->p * this->q;

    // 3. Вычисляется значение функции Эйлера от числа n: φ(n) = (p−1)⋅(q−1)
    this->t = (this->p - 1) * (this->q - 1);

    // 4. Выбирается целое число e ( 1 < e < φ(n) ), взаимно простое со значением функции Эйлера (t)
    //	  Число e называется открытой экспонентой
    this->e = calculateE(this->t);

    // 5. Вычисляется число d, мультипликативно обратное к числу e по модулю φ(n), то есть число, удовлетворяющее сравнению:
    //    d ⋅ e ≡ 1 (mod φ(n))
    this->d = calculateD(this->e, this->t);


    // 6. Пара {e, n} публикуется в качестве открытого ключа RSA

    // 7. Пара {d, n} играет роль закрытого ключа RSA и держится в секрете
}

bool RSA::isPrime(long int prime){
    long int i, j;

    j = (long int)sqrt((long double)prime);

    for (i = 2; i <= j; i++)
    {
        if (prime % i == 0)
        {
            return false;
        }
    }

    return true;
}

long int RSA::calculateE(long int t) {
    // Выбирается целое число e ( 1 < e < t ) // взаимно простое со значением функции Эйлера (t)

    long int e;

    for (e = 2; e < t; e++)
    {
        if (RSA::greatestCommonDivisor(e, t) == 1)
        {
            return e;
        }
    }

    return -1;
}

long int RSA::greatestCommonDivisor(long int e, long int t){
    while (e > 0)
    {
        long int myTemp;

        myTemp = e;
        e = t % e;
        t = myTemp;
    }

    return t;
}

long int RSA::calculateD(long int e, long int t){
    // Вычисляется число d, мультипликативно обратное к числу e по модулю φ(n), то есть число, удовлетворяющее сравнению:
    //    d ⋅ e ≡ 1 (mod φ(n))

    long int d;
    long int k = 1;

    while (1)
    {
        k = k + t;

        if (k % e == 0)
        {
            d = (k / e);
            return d;
        }
    }

}

QString RSA::encrypt(const QString msg, long int e, long int n){
    QString ans = "";

    for (long int f = 0; f < msg.length(); f++)
    {

        long int current, result;

        current = msg[f].unicode() - 97;
        result = 1;

        for (unsigned long long int j = 0; j < e; j++)
        {
            result = result * current;
            result = result % n;
        }

        this->encryptedText[f] = result;
        ans += (char)result;
    };

    return ans;
}

QString RSA::decrypt(const QString msg, long int d, long int n){
    QString ans = "";

    for (long int f = 0; f < msg.length(); f++)
    {
        long int current, result;

        current = this->encryptedText[f];
        result = 1;

        for ( unsigned long long int j = 0; j < d; j++)
        {
            result = result * current;
            result = result % n;
        }

        decryptedText[f] = result + 97;
        ans += (char)(result + 97);
    }

    return ans;
}

QByteArray RSA::getPubKeys() {
    return QByteArray::number(this->e) + " " + QByteArray::number(this->n);
}
