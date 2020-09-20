#include <stdio.h>
#include <stdlib.h>

// const 
int HEAD = 0;
int TAIL = 0;

/*
* Worst case -> O(n)
* Best Case -> O(1)
* This is being told for sorted array
*/

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
        if (position <= size && position >= 1) {
            for (int i = size - 1; i >= position - 1; i--) {
                a[i + 1] = a[i];
            }
            a[position - 1] = value;
        } else {
            printf("\nPlease enter a valid position. The position must be between 1 to %d .\n", size);
        }
    }
    return a;
}
// -- end of insertion -- //

// -- deletion -- //
int * deleteAtPosition(int a[], int size, int position) {
     if (HEAD == TAIL) {
        printf("\nThe Array is empty. Please add some elements first. HEAD is at %d\'th element\n", HEAD);
    } else  {
        if (position <= size) {
            for (int i = position - 1; i <= size - 1; i++) {
                a[i] = a[i + 1];
            }
        } else {
            printf("\nPlease enter a valid position. The position must be between 1 to %d .\n", size);
        }
    }
    return a;
}
// -- end of deletion -- //

// insertion and deletion for unsorted Array
/*
* Worst case -> O(1)
* Best Case -> O(1)
* This is being told for unsorted array
*/

// -- insertion -- //
int * insertAtPositionUnsorted(int a[], int size, int value, int position) {
    if (a[size - 1] == HEAD) {
        printf("\nThe Array is full. Please Delete some elements first. HEAD is at %d\'th element\n", HEAD);
    } else  {
        if (position <= size && position >= 1) {
            a[HEAD] = a[position - 1];
            a[position - 1] = value;
        } else {
            printf("\nPlease enter a valid position. The position must be between 1 to %d .\n", size);
        }
    }
    return a;
}
// -- end of insertion -- //

// -- deletion -- //
int * deleteAtPositionUnsorted(int a[], int size, int position) {
     if (HEAD == TAIL) {
        printf("\nThe Array is empty. Please add some elements first. HEAD is at %d\'th element\n", HEAD);
    } else  {
        if (position <= size) {
            a[position - 1] = a[HEAD - 1];
            HEAD--;
        } else {
            printf("\nPlease enter a valid position. The position must be between 1 to %d .\n", size);
        }
    }
    return a;
}
// -- end of deletion -- //

int main() {

    int a[5] = {1, 2, 4};
    int b[5] = {10, 20, 40};
    HEAD = 3;

    // printf("Enter the elements of the array: ");
    // for (int i = 0; i < 5; i++) {
    //     int condition = scanf("%d", &a[i]);
    //     if (condition == 'q') {
    //         break;
    //     }
    //     HEAD++;
    // }

    printf("\nTAIL %d and HEAD %d\n", TAIL, HEAD);
    printf("\n\nTraversal Insertion\n");
    traversal(insertAtPosition(a, 5, 100, 2), 5);
    printf("\n\nTraversal Deletion\n");
    traversal(deleteAtPosition(a, 5, 2), 5);
    printf("\n\nTraversal Insertion UNsorted\n");
    traversal(insertAtPositionUnsorted(b, 5, 100, 2), 5);
    printf("\n\nTraversal Deletion Unsorted\n");
    traversal(deleteAtPositionUnsorted(b, 5, 2), 5);

    return 0;
}