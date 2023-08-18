#include <iostream>

int main() {
    int x = 3;
    {
        int x = -10;
        int y = 5;
        std::cout << "x+y" << (x+y) << std::endl;
    }
    // std::cout << "x+y" << (x+y) << std::endl; // Error! 'y' is not defined out of its scope
    return 0;
}