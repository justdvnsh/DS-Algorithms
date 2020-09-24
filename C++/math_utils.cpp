#include "math_utils.h"

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
    return retangle.length * retangle.width;
}