#include "Array_utils.h"
#include <vector>
#include <iostream>

MyArray::MyArray(std::vector<int> arr)
{
    data = arr;
}

void MyArray::traverse()
{
    for (int el : data)
    {
        std::cout << el << "\t";
    }
    std::cout << std::endl;
}

void MyArray::insertAtPosition(int value, int position)
{
    for (int i = data.size() - 1; i >= position - 1; i--)
    {
        data[i + 1] = data[i];
    }
    data[position - 1] = value;

    MyArray::traverse();
}