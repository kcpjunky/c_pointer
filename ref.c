#include <stdio.h>


int main(void) {    
    
    char *titles[] = {
        "A tale of two cities",
        "wuthering height",
        "don quixote",
        "gulliver's travels"
    };
    

    char **englishbooks[3];
    englishbooks[0] = &titles[0];
    englishbooks[1] = &titles[1];

   // englishbooks[2] = &titles[3];

    printf("%s\n", *englishbooks[1]);
    printf("%s\n", englishbooks[1]);
    return 0;
}

