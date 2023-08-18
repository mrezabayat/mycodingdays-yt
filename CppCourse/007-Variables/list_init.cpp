#include <iostream>
int main(){
    double doubleVar = 3.14;
    // int a{doubleVar}; // Error! won't compile
    int a = doubleVar;
    std::cout << "a: " << a << std::endl;
}