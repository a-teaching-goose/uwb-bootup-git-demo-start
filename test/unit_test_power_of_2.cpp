#include "gtest/gtest.h"
#include "power_of_2/power_of_2.h"
#include "util.h"

TEST(power_of_2, edge_cases) {
    uint *input = new uint[6]{0, 1, 2, 3, 4, 5};
    bool *expect = new bool[6]{false, true, true, false, true, false};

    for (int i = 0; i < 5; ++i) {
        bool actual = is_power_of_2(input[i]);
        ASSERT_EQ(expect[i], actual) << case_string(i);
    }

    delete[]expect;
    delete[]input;
}