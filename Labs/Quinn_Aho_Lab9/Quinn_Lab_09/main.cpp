#include <iostream>
#include "Square.h"

int main() {
    Square sq1(4); 
    Square sq2(3); 

    Square sum = sq1 + sq2;
    std::cout << "Sum of sides: " << sum.getLength() << ", Area: " << sum.getArea() << std::endl;

    Square product = sq1 * sq2;
    std::cout << "Product of sides: " << product.getLength() << ", Area: " << product.getArea() << std::endl;

    return 0;
}
