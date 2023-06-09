#ifndef BIGPRIMEGENERATOR_H
#define BIGPRIMEGENERATOR_H

#include <iostream>
#include <cstdint>
#include <vector>
#include <random>
#include <bitset>
#include <QRandomGenerator>

class BigPrimeGenerator
{
private:

    ~BigPrimeGenerator() = delete;
    BigPrimeGenerator& operator = (BigPrimeGenerator&) = delete;

    static uint64_t mulmod(uint64_t a, uint64_t b, uint64_t m);

    static uint64_t powMod(uint64_t a, uint64_t b, uint64_t n);

    static uint64_t getRandom64();

    static uint64_t getLowLevelPrime();

    static bool trialComposite(uint64_t a, uint64_t evenC, uint64_t to_test, int max_div_2);

    static bool MillerRabinTest(uint64_t to_test);
public:

    // Вектор первых простых чисел, для нахождения кандидатов на простоту
    static std::vector<int> first_primes;

    // Получаем большое простое число
    /// \brief getBigPrime отвечает за генерацию простого числа
    /// \param void
    /// \return uint64_t
    ///
    static long long int getBigPrime();
};

#endif // BIGPRIMEGENERATOR_H
