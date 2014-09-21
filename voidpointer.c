#include <stdio.h>

int main(void) {
    int x = 10;
    int *pi = &x;

    void* t = pi;
    

    printf("%d\n", x);
    printf("%p\n", pi);
    printf("%p\n", t);

    size_t size = sizeof(void*);
    printf("%zu\n", size);

    size_t size2 = sizeof(char*);
    printf("size of char is %zu\n", size2);
    
    size_t size3 = sizeof(int*);
    printf("size of int is %zu\n", size3);

    size_t size4 = sizeof(int);
    printf("size of int value is %zu\n", size4);
    return 0;

 }



