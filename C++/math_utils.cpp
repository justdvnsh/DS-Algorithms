#include "math_utils.h"

namespace mth 
{

    template <typename T>
    void swap(T &x, T &y) 
    {
        T temp = x;
        x = y;
        y = temp;
    }

    double area(int length, int width)
    {
        return length * width;
    }

    double area(int length)
    {
        return length * length;
    }

    double area(Rectangle retangle)
    {
        return retangle.calculateArea();
    }
}