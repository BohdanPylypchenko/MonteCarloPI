#include "vector.h"

#include <stdlib.h>

/*
 * Vector structure implementation
 */
typedef struct vector {
    // Coords
    long double xcdr;
    long double ycdr;

    // Module
    long double module2;
} vector;

/*
 * Private module^2 calculator method
 */
static long double calc_module2(const vector *v);

/*
 * Random vector constructor implementation
 */
vector *new_vector() {
    // Allocating memory
    vector *result = (vector *)malloc(sizeof(vector));

    // Generating random coords
    result->xcdr = (long double)(rand()) / (long double) RAND_MAX;
    result->ycdr = (long double)(rand()) / (long double) RAND_MAX;

    // Calculating module^2
    result->module2 = calc_module2(result);

    // Returning result
    return result;
}

/*
 * X coord getter implementation
 */
long double get_xcrd(const vector *v) {
    return v->xcdr;
}

/*
 * Y coord getter implementation
 */
long double get_ycrd(const vector *v) {
    return v->ycdr;
}

/*
 * Vector module^2 getter implementation
 */
long double get_module2(const vector *v) {
    return v->module2;
}

/*
 * Vector deallocator implementation
 */
vector *free_vector(const vector *v) {
    free(v);
    v = NULL;
    return v;
}

/*
 * Private module^2 calculator method implementation
 */
static long double calc_module2(const vector *v) {
    return v->xcdr * v->xcdr + v->ycdr * v->ycdr;
}
