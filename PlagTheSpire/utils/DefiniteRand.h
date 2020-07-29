#pragma once
#include <stdlib.h>
#include <ctime>

// 一个随机的种子
class DefiniteRand {
    using definite_rand_num = int;
public:
    DefiniteRand(definite_rand_num seed = static_cast<int>(time(nullptr))) : m_seed(seed) {};
    ~DefiniteRand() {}

    // 随机生成一个int变量
    inline int GenRand() {
        srand(static_cast<unsigned int>(m_seed));
        m_seed = rand();
        return rand();
    }

    // return x; a < x < b
    inline int GenRandBetween(int a, int b) {
        if (a < b) return GenRand() % (b - a) + a;
        else if (a > b) return GenRand() % (a - b) + b;
        return 0;
    }

protected:
    definite_rand_num m_seed;
};