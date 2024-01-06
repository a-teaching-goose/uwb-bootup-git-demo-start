#include "fib.h"

uint fib(const uint n) {
    uint *data = new uint[n + 1];
    if (n == 0 || n == 1) {
        delete[]data;
        return n;
    }

    data[0] = 0;
    data[1] = 1;
    for (int i = 2; i <= n; ++i) {
        data[i] = data[i - 1] + data[i - 2];
    }

    uint result = data[n];
    delete[]data;

    return result;
}