#ifndef ARRAY_UTILS
#define ARRAY_UTILS

#include <iostream>
#include <vector>

class MyArray 
{
    std::vector<int> data;

    public:
        MyArray(std::vector<int> data);
        void traverse();
        void insertAtPosition(int value, int position);
        void insertAtPositionUnsorted(int value, int position);
        void deleteAtPosition(int position);
        void deleteAtPositionUnsorted(int position);
};

#endif