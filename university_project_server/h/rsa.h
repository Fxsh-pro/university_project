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
    long int encryptedText[100];

    long int decryptedText[100];

    unsigned long long int p, q, n, t, e, d;

    bool isPrime(long int);
    long int calculateE(long int);
    long int greatestCommonDivisor(long int, long int);
    long int calculateD(long int, long int);
public:
    RSA();
    QString encrypt(const QString msg, long int e, long int n);
    QString decrypt(const QString msg, long int d, long int n);
    QByteArray getPubKeys();
};



#endif

