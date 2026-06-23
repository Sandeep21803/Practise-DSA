
#include <iostream>

// Global variable declaration
int globalVar = 42;

// Global constant
const double PI = 3.14159;

// Global array
int numbers[] = {1, 2, 3, 4, 5};

int main() {
    std::cout << "Global variable: " << globalVar << std::endl;
    std::cout << "Global constant: " << PI << std::endl;
    std::cout << "First element: " << numbers[0] << std::endl;
    return 0;
}