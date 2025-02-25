<<<<<<< HEAD
// main.cpp (в ветке main)
=======
// main.cpp
>>>>>>> featureutils
#include <iostream>
#include "utils.h"

int main() {
    int x = 5;
    int y = 10;

    int sum = add(x, y);
<<<<<<< HEAD
    std::cout << "The sum of " << x << " and " << y << " is: " << sum << std::endl;

    int product = multiply(x, y); // Используем функцию умножения
    std::cout << "The product of " << x << " and " << y << " is: " << product << std::endl;
=======
    std::cout << "Sum: " << sum << std::endl;

    int product = multiply(x, y); // Используем функцию умножения
    std::cout << "Product: " << product << std::endl;
>>>>>>> featureutils

    return 0;
}