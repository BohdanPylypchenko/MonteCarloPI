#include "gtest/gtest.h"

extern "C" {
#include "vector/vector.h"

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
}

/*
 * Vector life cycle test
 */
TEST(vector, full_cycle) {
    // Initializing seed
    srand(time(NULL));

    // Creating vector
    vector *v = new_vector();

    // Printing vector info
    printf("xcdr: %Lf\n", get_xcrd(v));
    printf("ycdr: %Lf\n", get_ycrd(v));
    printf("module2: %Lf\n", get_module2(v));

    // Deallocating vector
    v = free_vector(v);

    // Checking for successful deallocation
    ASSERT_EQ(NULL, v);
}

