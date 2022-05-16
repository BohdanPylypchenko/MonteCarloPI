#include "mc_pi/mc_pi.h"

#include <stdio.h>

int main() {
    long double pi = mc_pi(30000);
    printf("pi: %.10Lf\n", pi);
    return 0;
}
