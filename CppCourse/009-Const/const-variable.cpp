#include "const-variable.h"

#include <cmath>
#include <iostream>

const int maxRetries = 16;

int main() {
    const int maxPasswordLength = 32;
    // maxPasswordLength = 20; // Error: Attempt to modify a const object

    const double number = std::pow(2, 3.5);  // Initialize at run-time
    const int daysInAWeek = 7;               // Initialize at compile-time
    // const bool errorFlag; // Error: Uninitilized const object

    const int num1 = 10;
    const int num2 = 5;
    int sum = num1 + num2;  // Valid: adding const ints
    bool check = num1 > 0;  // Valid: comparator operator on a const object

    int value = 34;
    const int constValue = value;  // Valid: Copying value into constValue
    int newValue = constValue;     // Valid: Copying constValue into newValue

    const double speedOfLight = 299792458.0;  // Speed of light
    const double &c =
        speedOfLight;  // Reference to const bound to speed of light
    // c = 280000000; // Error: Cannot modify through a reference to const
    // double &nonConstRef = speedOfLight; // Error: Non-const reference to a
    // const object

    int temperature = 24;
    const int &tempRef =
        temperature;  // Binding a const reference to an non-const object

    int count = 10;
    int &countRef = count;
    const int &constCountRef = count;
    
    // constCountRef = 13;
    count = 13;

    const double gravity = 9.81;
    // double *ptrToGravity = &gravity; // Error: Cannot point a plain pointer
    // to a const object
    const double *ptrToGravity = &gravity;  // Valid
    // *ptrToGravity = 10; // Error: Cannot assign to ptrToGravity
    double pressure = 34.5;
    ptrToGravity =
        &pressure;  // Valid: ptrToGravity can point to a non-const double

    int errorCode = 0;
    int *const constPtrErrorCode = &errorCode;
    *constPtrErrorCode = 12;
    // int num1 =1;
    // constPtrErrorCode = &num1; // Error

    int age = 32;
    int *const p1 = &age;

    const double speed = 44.12;
    const double *p2 = &speed;

    const int ci = 12;
    int i = 13;
    i = ci;  // Valid

    const int *p3 = &ci;
    // int *p = p3; // Error: Mismatch in low-level constness

    constexpr int gravityOfMoon = 1.62;

    return 0;
}