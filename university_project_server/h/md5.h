#ifndef MD5_H
#define MD5_H
#include <iostream>
#include <vector>
#include <cmath>
class MD5 {
    unsigned char* input;
    unsigned int* block;
    int size = 0;

    unsigned int A = 0x67452301;
    unsigned int B = 0xefcdab89;
    unsigned int C = 0x98badcfe;
    unsigned int D = 0x10325476;
    unsigned int T[64];

    void appendBits(std::string& data);

    void init();

    unsigned int rotate_left(unsigned int value, unsigned int shift);

    unsigned int F(unsigned int x, unsigned int y, unsigned int z);
    unsigned int G(unsigned int x, unsigned int y, unsigned int z);
    unsigned int H(unsigned int x, unsigned int y, unsigned int z);
    unsigned int I(unsigned int x, unsigned int y, unsigned int z);

    void process_block();

    void process();

    std::vector<unsigned char> hashToArr();

    std::string getHexMD5(std::vector<unsigned char> hash);
    public:
    std::string get_hash(std::string data);
};

#endif // MD5_H
