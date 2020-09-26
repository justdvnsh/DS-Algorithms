#include <iostream>
#include <vector>
#include "Array_utils.h"

int main() 
{
    std::vector<int> data = {1,2,3,4,5,6,7};
    MyArray<int> array = MyArray<int>(data);

    array.traverse();
    array.insertAtPosition(100, 3);
    array.insertAtPosition(200, 4);
    array.insertAtPosition(300, 5);

    array.insertAtPositionUnsorted(999, 1);

    array.deleteAtPosition(3);
    array.deleteAtPositionUnsorted(3);
}