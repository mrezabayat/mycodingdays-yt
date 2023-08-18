#include <iostream>

int main() {
    int value = 42;
    int *ptr;

    ptr = &value;

    std::cout << "Value: " << value << std::endl;
    std::cout << "Pointer value: " << *ptr << std::endl;

    *ptr = 100;

    std::cout << "Updated value: " << value << std::endl;
    
    return 0;
}
