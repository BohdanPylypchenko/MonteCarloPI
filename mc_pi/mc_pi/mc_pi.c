#include "mc_pi.h"
#include "vector/vector.h"

#include <time.h>
#include <stdlib.h>

/*
 * Generates n vectors, returns count of vectors in
 * circle with r = 2
 */
static int get_count_in_circle(const int n);

/*
 * mc_pi implementation
 */
long double mc_pi(const int v_count) {
    // Initializing random number sequence
    srand(time(NULL));

    // Getting vector count in circle
    int in_count = get_count_in_circle(v_count);

    // Calculating pi
    return (long double)in_count / (long double)v_count * 4.0;
}

/*
 * get_count_in_circle implementation
 */
static int get_count_in_circle(const int n) {
    // Initializing accumulator
    int in_count = 0;

    // Generating
    vector *current;
    for (int i = 0; i < n; i++) {
        // Generating vector
        current = new_vector();

        // Checking module
        if (get_module2(current) < 1) { in_count++; }

        // Deallocating current vector
        free_vector(current);
    }

    // Returning result
    return in_count;
}
