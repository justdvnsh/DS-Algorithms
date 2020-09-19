#include <stdio.h>
#include <stdlib.h>

// const 
int HEAD = 0;
int TAIL = 0;

// -- traversal -- //
void traversal(int a[], int size) {

    for (int i = 0; i < size; i ++) {
        printf("%d \t", a[i]);
    }

}
// -- end of traversal -- //

// -- insertion -- //
int * insertAtPosition(int a[], int size, int value, int position) {
    if (a[size - 1] == HEAD) {
        printf("\nThe Array is full. Please Delete some elements first. HEAD is at %d\'th element\n", HEAD);
    } else  {
        if (position <= size) {
            for (int i = size - 1; i >= position - 1; i--) {
                a[i] = a[i + 1];
            }
            a[position] = value;
        } else {
            printf("\nPlease enter a valid position. The position must be between 1 to %d .\n", size);
        }
    }
    return a;
}
// -- end of insertion -- //

int main() {

    int a[5];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < 5; i++) {
        int condition = scanf("%d", &a[i]);
        if (condition == 'q') {
            a[i] = 0;
            break;
        }
        HEAD++;
    }

    printf("\n TAIL %d and HEAD %d", TAIL, HEAD);
    traversal(insertAtPosition(a, 5, 100, 6), 5);


    return 0;
}