#include <iostream>

int main() {
    bool a = 0;
    // std::cout << std::boolalpha;
    std::cout << a << std::endl;
    int b = false;
    std::cout << "b: " << b << std::endl;
    int c = 3.14;
    std::cout << "c: " << c << std::endl;
    int intVar = 123456789;
    float floatVar = intVar;
    std::cout << "intVar: " << intVar <<std::endl;
    std::cout << "floatVar: " << floatVar <<std::endl;
    unsigned int unsignedInt = -1;
    std::cout << "unsignedInt: " << unsignedInt << std::endl;
    int i = -45;
    unsigned int u = 10;
    std::cout << "i + i: " << (i+i) << std::endl;
    std::cout << "u + i: " << (u+i) << std::endl;
    unsigned int u2 = 42;
    std::cout << "u2-u: " << (u2-u) << std::endl;
    std::cout << "u-u2: " << (u-u2) << std::endl;

    return 0;
}