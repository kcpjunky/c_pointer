#include <stdio.h>

int main(void) {
    int num = 5;
    int *pi = &num;

    // this statement prints the value of "num"
    printf("%d\n", *pi);

    *pi = 10;

    printf("%d\n", *pi);
    return 0;
}

