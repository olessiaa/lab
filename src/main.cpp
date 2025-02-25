// main.cpp
#include <iostream>
#include "utils.h"

int main() {
    int x = 5;
    int y = 10;

    int sum = add(x, y);
    std::cout << "Sum: " << sum << std::endl;

    int product = multiply(x, y); // Используем функцию умножения
    std::cout << "Product: " << product << std::endl;

    return 0;
}