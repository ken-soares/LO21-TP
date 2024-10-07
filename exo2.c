#include <stdio.h>
#include <math.h>

void solutions(float a, float b, float c, int *n, float *x1, float *x2) {
    float delta = (b*b) - 4 * a * c;

    if (delta > 0) {
        *n = 2;
        *x1 = (-b - sqrt(delta))/(2*a);
        *x2 = (-b + sqrt(delta))/(2*a);
    } else if (delta == 0) {
        *n = 1;
        *x1 = (-b)/2*a;
    } else {
        *n = 0;
    }
}

int main(int argc, char **argv) {
    // exemple avec 2x^2 - 2x - 3
    
    float sol1;
    float sol2;
    int n;

    solutions(2, -2, -3, &n, &sol1, &sol2);

    printf("n: %d, x1: %f, x2: %f\n", n, sol1, sol2);

    return 0;
}
