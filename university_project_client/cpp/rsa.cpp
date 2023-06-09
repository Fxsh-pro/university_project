#include "h/rsa.h"
#include "h/bigprimegenerator.h"

QVector<long int> RSA::encryptedText;
QVector<long int> RSA::decryptedText;

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

QString RSA::decrypt(const QString& message, long int d, long int n)
{
    QString decryptedText = "";
    QString encryptedValue = "";

        for (long int i = 0; i < message.length(); i++)
        {
            if (message[i] == ' ')
            {
                long int encryptedNum = encryptedValue.toInt();
                long int current = encryptedNum;
                long int result = 1;

                for (long int j = 0; j < d; j++)
                {
                    result = (result * current) % n;
                }

                decryptedText += (char)(result + 97);
                encryptedValue = "";
            }
            else
            {
                encryptedValue += message[i];
            }
        }

        return decryptedText;
}

QString RSA::encrypt(const QString& message, long int e, long int n)
{
    QString encryptedText = "";

    for (long int i = 0; i < message.length(); i++)
    {
        long int current = message[i].unicode() - 97;
        long int result = 1;

        for (long int j = 0; j < e; j++)
        {
            result = (result * current) % n;
        }

        encryptedText += QString::number(result) + " ";
    }

    return encryptedText;
}


