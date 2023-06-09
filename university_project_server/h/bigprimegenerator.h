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

    // Реализован через битовые операции для быстроты
    /// \brief mulmod Вычисляет произведение a и b, а после ищет остаток от деления на m
    /// \param uint64_t a - первое число, uint64_t b - второе число, uint64_t m - число, остаток деления на которое нужно получить
    /// \return uint64_t
    ///
    static uint64_t mulmod(uint64_t a, uint64_t b, uint64_t m);

    //
    /// \brief powMod Возводит а в степень b и ищет остаток от деления на n
    /// \param uint64_t a - число, основание, uint64_t b - показатель степени, uint64_t n - число, остаток деления на которое нужно получить
    /// \return uint64_t
    ///
    static uint64_t powMod(uint64_t a, uint64_t b, uint64_t n);



    // идем через все 64 бита и устанавливаем случайно значение 0 или 1
    // первый и последний бит устанавливаем значение равным 1, чтобы получить просто большое число
    /// \brief getRandom64 отвечает за генерацию случайного числа
    /// \param void
    /// \return uint64_t
    ///
    static uint64_t getRandom64();

    /// \brief getLowLevelPrime отвечает за создание кандидата на простое число
    /// \param void
    /// \return uint64_t
    ///
    static uint64_t getLowLevelPrime();

    // Проверка на то, является ли число составным или нет
    /// \brief trialComposite отвечает за проверку числа на простоту
    /// \param uint64_t a - случайное число, uint64_t evenC - максимальный нечетный результат при делении на два, uint64_t to_test - проверяемое на составность число, int max_div_2 - максимальное количество раз, которое (число - 1) будет делиться на 2
    /// \return bool
    ///
    static bool trialComposite(uint64_t a, uint64_t evenC, uint64_t to_test, int max_div_2);

    //
    /// \brief MillerRabinTest отвечает за Тест Миллера-Рабина, который определяет число, являющееся простым с большой вероятностью
    /// \param uint64_t to_test - проверяемое число
    /// \return bool
    ///
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
