#include "gtest/gtest.h"

extern "C" {
#include "mc_pi/mc_pi.h"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
}

/*
 * mc_pi stress test
 */
TEST(mc_pi, stress) {
    long double pi;
    long double deviation;
    for (int i = 6; i < 10; i++) {
        pi = mc_pi((int)pow(10, i));
        deviation = abs(pi - 3.14);
        ASSERT_LT(deviation, 0.025);
    }
}

