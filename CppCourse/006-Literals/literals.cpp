#include <iostream>
#include <typeinfo>

int main() {
    // ---------------------- Integral Literals ----------------------
    std::cout << "91 is an " << typeid(91).name() << std::endl;
    std::cout << "024 is an " << typeid(024).name() << std::endl;
    std::cout << "0x14 is an " << typeid(0x14).name() << std::endl;
    // Let's override the default type
    std::cout << "64u is an " << typeid(64u).name() << std::endl;
    std::cout << "85L is a " << typeid(85l).name() << std::endl;
    std::cout << "70LL is a " << typeid(70LL).name() << std::endl;

    // ---------------------- Floating-point Literals ----------------------
    std::cout << "3.141459 is a " << typeid(3.141459).name() << std::endl;
    std::cout << "100. is a " << typeid(100.).name() << std::endl;
    std::cout << "1e3 is a " << typeid(1e3).name() << std::endl;
    // Let's override the default type
    std::cout << "3.141459f is a " << typeid(3.141459f).name() << std::endl;
    std::cout << "100.L is a " << typeid(100.L).name() << std::endl;

    // ---------------------- Character Literals ----------------------
    std::cout << "'7' is a " << typeid('7').name() << std::endl;
    // Let's override the default type
    std::cout << "L'A' is a " << typeid(L'A').name() << std::endl;

    // ---------------------- String Literals ----------------------
    std::cout << "\"MyCodingDays\" is a " << typeid("MyCodingDays").name() << std::endl;
    // Let's override the default type
    std::cout << "Let's" "concatenate"
    " some strings, using a space and a new line" << std::endl;

    // ---------------------- Boolean Literals -------------------
    std::cout << "true is a " << typeid(true).name() << std::endl;
    std::cout << "false is a " << typeid(false).name() << std::endl;

    return 0;
}
