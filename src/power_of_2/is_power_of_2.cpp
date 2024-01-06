#include "power_of_2.h"

bool is_power_of_2(uint val) {
    return (val != 0) && ((val & (val - 1)) == 0);
}
