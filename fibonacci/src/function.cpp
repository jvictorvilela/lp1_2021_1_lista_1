#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> fibVector;

    if (n == 0 || n == 1) {
        return fibVector;
    }

    fibVector.push_back(1);
    fibVector.push_back(1);

    int next = 2;
    int i = 2;

    while (next < n) {
        fibVector.push_back(next);
        i++;
        next = fibVector[i-1] + fibVector[i-2];
    }

    return fibVector;
}
