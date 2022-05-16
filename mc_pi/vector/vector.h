#ifndef MONTECARLOPI_DEMO_VECTOR_H
#define MONTECARLOPI_DEMO_VECTOR_H

/*
 * Vector structure declaration
 */
typedef struct vector vector;

/*
 * Random vector constructor
 */
vector *new_vector();

/*
 * X coord getter
 */
long double get_xcrd(const vector *v);

/*
 * Y coord getter
 */
long double get_ycrd(const vector *v);

/*
 * Vector module^2 getter
 */
long double get_module2(const vector *v);

/*
 * Vector deallocator
 */
vector *free_vector(const vector *v);

#endif


