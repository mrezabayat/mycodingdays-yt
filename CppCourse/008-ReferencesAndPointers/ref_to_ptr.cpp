#include <iostream>

int main() {
    int x = 10;
    int *ptr = &x;  // ptr points to the integer x

    int *&refToPtr = ptr;

    *refToPtr = 12;

    std::cout << "x: " << x << std::endl;


    return 0;
}
