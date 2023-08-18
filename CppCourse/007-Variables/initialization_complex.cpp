#include <iostream>

int main(){
    int x = 5;
    int y = 10;

    // Let's initialize a variable with a complex expression
    int result = (x+y)/x-y*(x-y);
    std::cout << "Result is: " << result << std::endl;
    return 0;
}