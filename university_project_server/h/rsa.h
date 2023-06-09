#ifndef RSA_H
#define RSA_H

#include <iostream>
#include <QString>
#include <QtCore>
#include <cmath>
#include <string>
#include <stdio.h>
#include <stdlib.h>

class RSA{
private:
    static QVector<long int> encryptedText;
    static QVector<long int> decryptedText;
public:
    RSA();

    static bool isPrime(long int);
    static long int calculateE(long int);
    static long int greatestCommonDivisor(long int, long int);
    static long int calculateD(long int, long int);
    static QString encrypt(const QString& message, long int e, long int n);
    static QString decrypt(const QString& encryptedMessage, long int d, long int n);
};



#endif

