#include <iostream>
#include <limits>

int main() {
    std::cout << "Lower bound of double is " 
              << std::numeric_limits<double>::lowest() 
              << std::endl;

    std::cout << "Min of double is " 
              << std::numeric_limits<double>::min() 
              << std::endl;

    std::cout << "Max of double is " 
              << std::numeric_limits<double>::max() 
              << std::endl;
    return 0;
}