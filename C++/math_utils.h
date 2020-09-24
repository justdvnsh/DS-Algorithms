#ifndef MATH_UTILS
#define MATH_UTILS

class Rectangle
{
    double length;
    double width;

    public:
        Rectangle(double l, double w)
        {
            this->length = l;
            this->width = w;
        }
        
        int calculateArea()
        {
            return this->length * this->width;
        }
};
namespace mth 
{
    template <typename T>
    void swap(T &x, T &y);

    double area(int length, int width);

    double area(int length);

    double area(Rectangle retangle);

}

#endif