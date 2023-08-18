#include <iostream>

int main(){
    // type name;
    // integral types
    int my_integer_variable;
    std::cout << "Size of int is " << sizeof(int) << " bytes." << std::endl;
    // signed and unsigned
    unsigned int my_unsigned_var;
    // short or long
    short int my_short_integer; // short
    long int my_long_int;
    long long int my_long_long_int;
    std::cout << "Size of short int is " << sizeof(short int) 
              << " bytes." << std::endl;
    std::cout << "Size of long int is " << sizeof(long int) 
              << " bytes." << std::endl;
    std::cout << "Size of long long long int is " << sizeof(long long int) 
              << " bytes." << std::endl;
    // combination of signedness and size
    unsigned long long int unsigned_ll_int;
    // character
    char character_var; // utf-8
    std::cout << "Size of char is " << sizeof(char) 
              << " byte." << std::endl;
    signed char signed_char_var;
    unsigned char unsigned_char_var;
    wchar_t wide_character_var;
    std::cout << "Size of wchar_t is " << sizeof(wchar_t) 
              << " bytes." << std::endl;
    // utf-16
    char16_t utf16_var;
    // utf-32
    char32_t utf32_var;
    std::cout << "Size of char16_t is " << sizeof(char16_t) 
              << " bytes." << std::endl;
    std::cout << "Size of char32_t is " << sizeof(char32_t) 
              << " bytes." << std::endl;
    // boolean type
    bool boolean_var;
    std::cout << "Size of boolean is " << sizeof(bool) 
              << " byte." << std::endl;
    // floating-point type
    float single_precision;
    double double_precision;
    long double ext_double_precision;
    std::cout << "Size of float is " << sizeof(float) 
              << " bytes." << std::endl;
    std::cout << "Size of double is " << sizeof(double) 
              << " bytes." << std::endl;
    std::cout << "Size of long double is " << sizeof(long double) 
              << " bytes." << std::endl;
    return 0;
}