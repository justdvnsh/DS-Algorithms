#include "Array_utils.h"
#include <vector>
#include <iostream>

template<class T>
MyArray<T>::MyArray(std::vector<T> arr)
{
    data = arr;
}

template<class T>
void MyArray<T>::traverse()
{
    for (T el : data)
    {
        std::cout << el << "\t";
    }
    std::cout << std::endl;
}

// if array is sorted .
// time complexity O(n)
template<class T>
void MyArray<T>::insertAtPosition(int value, int position)
{
    for (int i = data.size() - 1; i >= position - 1; i--)
    {
        data[i + 1] = data[i];
    }
    data[position - 1] = value;

    MyArray::traverse();
}

// if array is not sorted .
// time complexity O(1)
template <class T>
void MyArray<T>::insertAtPositionUnsorted(int value, int position)
{
    int temp = data[position];
    data[position] = value;
    data.push_back(temp);

    MyArray::traverse();
}

// if array is not sorted
// time complexity O(n)
template <class T>
void MyArray<T>::deleteAtPosition(int position)
{
    for (int i = position - 1; i <= data.size() - 1; i++)
    {
        data[i] = data[i + 1];
    }

    MyArray::traverse();
}

// if array is unsorted
template <class T>
void MyArray<T>::deleteAtPositionUnsorted(int position)
{
    data[position - 1] = data[data.size() - 1];

    MyArray::traverse();
}

template class MyArray<int>;