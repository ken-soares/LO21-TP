#include <stdio.h>

void permutation(int *a, int *b, int *c) {

    int temp = *a;
    // a devient b
    *a = *b;
    // b devient c
    *b = *c;
    // c devient a
    *c = temp;
}

int main(int argc, char **argv) {
    int a = 3; // 4
    int b = 4; // 5
    int c = 5; // 3

    permutation(&a,&b,&c);

    printf("a: %d, b: %d, c: %d\n", a,b,c);
    
    return 0;
}
