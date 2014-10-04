#include <stdio.h>

void swapWithPointers(int* pnum1, int* pnum2);

void swapWithPointers(int* pnum1, int* pnum2) {
    int tmp;
    tmp = *pnum1;

    *pnum1 = *pnum2;
    *pnum2 = tmp;
}

int main(void){

    int* num1;
    int* num2;

    int x = 10;
    int y = 20;

    num1 = &x;
    num2 = &y;

    swapWithPointers(num1, num2);

    printf(" %d, %d", x, y);
    return 0;
}

