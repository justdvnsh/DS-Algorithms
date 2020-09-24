#include <iostream>
#include <vector>

void print_vector(std::vector<int> &data) {
    for (int i : data) {
        std::cout << i << "\t";
    }
}

int main() {

    // int slices;
    // std::cout << "How many pizzas you want ? ";
    // std::cin >> slices;
    // std::cout << "Hello! You'll get " << slices << " of pizza." << std::endl;

    std::vector<int> data = {12,3,4,5,6};
    std::cout << data[0] << std::endl;
    print_vector(data);

    // passing by reference
    return 0;
}
