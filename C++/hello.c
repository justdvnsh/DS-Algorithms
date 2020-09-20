#include <stdio.h>
#include <stdlib.h>

int main() {

    int age = 20;
    int *ptr = &age;

    printf("Hello %d\n", *ptr);

    int arr[5] = {1,2};
    printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);

    return 0;
} 