#include "h/bigprimegenerator.h"

std::vector<int> BigPrimeGenerator::first_primes = {7, 11, 13, 17, 19, 23, 29,
                                                    31, 37, 41, 43, 47, 53, 59, 61, 67,
                                                    71, 73, 79, 83, 89, 97, 101, 103,
                                                    107, 109, 113, 127, 131, 137, 139,
                                                    149, 151, 157, 163, 167, 173, 179,
                                                    181, 191, 193, 197, 199, 211};

uint64_t BigPrimeGenerator::mulmod(uint64_t a, uint64_t b, uint64_t m)
{
    int64_t res = 0;

        while (a != 0) {
            if (a & 1) {

                res = (res + b) % m;
            }
            a >>= 1;
            b = (b << 1) % m;
        }
        return res;
}

uint64_t BigPrimeGenerator::powMod(uint64_t a, uint64_t b, uint64_t n)
{
    uint64_t x = 1;

        a %= n;

        while (b > 0) {
            if (b % 2 == 1) {
                x = mulmod(x, a, n); // умножение на базу
            }
            a = mulmod(a, a, n); // возвредение базы в квадрат
            b >>= 1;
        }
        return x % n;
}

uint64_t BigPrimeGenerator::getRandom64()
{
    // используются 63 бита, потому что при 64 битах нам будет недопступна операция возведения в квадрат
        constexpr int bits = 63;
        std::bitset<bits> a;

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<short> distr(0, 1);

        for (int i = 0; i < bits; i++) {
            a[i] = distr(gen);
        }

        a[0] = 1;
        a[bits - 1] = 1;

        return a.to_ullong();
}

uint64_t BigPrimeGenerator::getLowLevelPrime()
{
    while (true) {
            uint64_t candidate = getRandom64();
            bool is_prime = true;
            for (int i = 0; i < first_primes.size(); i++) {
                if (candidate == first_primes[i])
                    return candidate;

                if (candidate % first_primes[i] == 0) {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime)
                return candidate;
    }
}

bool BigPrimeGenerator::trialComposite(uint64_t a, uint64_t evenC, uint64_t to_test, int max_div_2)
{
    if (powMod(a, evenC, to_test) == 1)
            return false;

        for (int i = 0; i < max_div_2; i++) {
            uint64_t temp = static_cast<uint64_t>(1) << i;
            if (powMod(a, temp * evenC, to_test) == to_test - 1)
                return false;
        }

        return true;
}

bool BigPrimeGenerator::MillerRabinTest(uint64_t to_test)
{
    constexpr int accuracy = 20;

        int max_div_2 = 0;
        uint64_t evenC = to_test - 1;
        while (evenC % 2 == 0) {
            evenC >>= 1;
            max_div_2++;
        }

        // random numbers init
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<uint64_t> distr(2, to_test);

        for (int i = 0; i < accuracy; i++) {
            uint64_t a = distr(gen);

            if (trialComposite(a, evenC, to_test, max_div_2)) {
                return false;
            }
        }

        return true;
}

long long int BigPrimeGenerator::getBigPrime()
{
    srand(time(0));
    return first_primes[QRandomGenerator::global()->bounded(0, (int)first_primes.size())];
}
