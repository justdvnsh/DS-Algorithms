#include <stdio.h>
#include <stdlib.h>

int main() {

    int age = 20;
    int *ptr = &age;

    printf("Hello %d", *ptr);

    return 0;
} 