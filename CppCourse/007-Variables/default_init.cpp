#include <iostream>

int globalVar;

int main() {
    int localVar;
    std::cout << "Global Variable: " << globalVar << std::endl;
    std::cout << "Local Variable: " << localVar << std::endl;
    return 0;
}