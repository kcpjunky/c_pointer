#include <stdio.h>

int main(void) {

    int num = 5;

    const int limit = 500;

    int *pi;

    const int *pci;

    pi = &num;
    pci = &limit;

    printf("%d\n", *pi);
    printf("%p\n", &pi);

    for (int i = 0; i < 10; i++) {  
        printf("%p\n", &pi + i);
    }



    int x;
    int *const cpi = &x;

    x = 10;
    printf("%d\n", *cpi);

    *cpi = 15;
    printf("%d\n", *cpi);
    return 0;

}

