#include <iostream>
#include <string>
#include "math_utils.h"

int main() {

    int length = 10;
    int x = 20;
    int y = 40;
    std::string first_name = "Divyansh";
    std::string last_name = "Dwivedi";
    
    std::cout << x << "\t" << y << std::endl;
    std::cout << first_name << "\t" << last_name << std::endl; 

    Rectangle rect = Rectangle(20, 10);
    std::cout << mth::area(length) << std::endl;
    std::cout << mth::area(rect) << std::endl;
    // mth::swap(x, y);
    // mth::swap(last_name, first_name);
    
    std::cout << x << "\t" << y << std::endl;
    std::cout << first_name << "\t" << last_name << std::endl; 
}