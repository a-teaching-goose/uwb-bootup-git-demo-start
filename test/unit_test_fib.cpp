#include "gtest/gtest.h"
#include "fibonacci_sequence/fib.h"
#include "util.h"

#define SIZE 30

TEST(fib, test) {
    const uint expects[SIZE] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
                                55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181,
                                6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229};

    for (int i = 0; i < SIZE; ++i) {
        uint expect = expects[i];
        uint actual = fib(i);
        ASSERT_EQ(expect, actual) << case_string(i);
    }
}