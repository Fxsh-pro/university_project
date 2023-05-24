#ifndef BIGPRIMEGENERATOR_H
#define BIGPRIMEGENERATOR_H

#include <iostream>
#include <cstdint>
#include <vector>
#include <random>
#include <bitset>

class BigPrimeGenerator
{
private:

    ~BigPrimeGenerator() = delete;
    BigPrimeGenerator& operator = (BigPrimeGenerator&) = delete;
    // Вычисляет произведение a и b, а после ищет остаток от деления на m
    // Реализован через битовые операции для быстроты
    static uint64_t mulmod(uint64_t a, uint64_t b, uint64_t m);

    // Возводит а в степень b и ищет остаток от деления на n
    static uint64_t powMod(uint64_t a, uint64_t b, uint64_t n);

    // Вектор первых простых чисел, для нахождения кандидатов на простоту
    static std::vector<int> first_primes;

    // идем через все 64 бита и устанавливаем случайно значение 0 или 1
    // первый и последний бит устанавливаем значение равным 1, чтобы получить просто большое число
    static uint64_t getRandom64();

    // Создаем кандидата на простое число
    static uint64_t getLowLevelPrime();

    // Проверка на то, является ли число составным или нет
    static bool trialComposite(uint64_t a, uint64_t evenC, uint64_t to_test, int max_div_2);

    // Тест Миллера-Рабина, который определяет число, являющееся простым с большой вероятностью
    static bool MillerRabinTest(uint64_t to_test);
public:
    // Получаем большое простое число
    static uint64_t getBigPrime();
};

#endif // BIGPRIMEGENERATOR_H
