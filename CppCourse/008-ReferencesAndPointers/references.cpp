#include <iostream>

int main() {
    int originalValue = 45;

    int &refValue = originalValue;

    std::cout << "original value: " << originalValue << std::endl;
    std::cout << "reference value: " << refValue << std::endl;

    refValue = 36;

    std::cout << "original value: " << originalValue << std::endl;
    std::cout << "reference value: " << refValue << std::endl;

    int &ref;

    return 0;
}
