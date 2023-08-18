#include <iostream>

int main() {
    int num = 42;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;

    std::cout << "Value: " << num << std::endl;
    std::cout << "Pointer 1 value: " << *ptr1 << std::endl;
    std::cout << "Pointer 2 value: " << **ptr2 << std::endl;
    
    return 0;
}

