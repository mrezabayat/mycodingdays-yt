#include <iostream>
#include <limits>

int main() {
    // limits of int
    std::cout << "Lower bound of int " 
              << std::numeric_limits<int>::min() 
              << std::endl;
    std::cout << "Upper bound of int " 
              << std::numeric_limits<int>::max() 
              << std::endl;

    // limits of long long int
    std::cout << "Lower bound of long long int " 
              << std::numeric_limits<long long int>::min() 
              << std::endl;
    std::cout << "Upper bound of long long int " 
              << std::numeric_limits<long long int>::max() 
              << std::endl;

    // limits of unsigned int
    std::cout << "Lower bound of unsigned int " 
              << std::numeric_limits<unsigned int>::min() 
              << std::endl;
    std::cout << "Upper bound of unsigned int " 
              << std::numeric_limits<unsigned int>::max() 
              << std::endl;

    // limits of unsigned long long int
    std::cout << "Lower bound of long long int " 
              << std::numeric_limits<unsigned long long int>::min() 
              << std::endl;
    std::cout << "Upper bound of long long int " 
              << std::numeric_limits<unsigned long long int>::max() 
              << std::endl;

    return 0;
}