#ifndef ARRAY_UTILS
#define ARRAY_UTILS

#include <iostream>
#include <vector>

template <typename T> class MyArray 
{
    std::vector<T> data;

    public:
        MyArray(std::vector<T> data);
        void traverse();
        void insertAtPosition(int value, int position);
        void insertAtPositionUnsorted(int value, int position);
        void deleteAtPosition(int position);
        void deleteAtPositionUnsorted(int position);
};

#endif