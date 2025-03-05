#include <iostream>

// Function declaration
int fce(int *x, int y);

// Global variables
int a, b;

int fce(int *x, int y)
{
    *x = (*x) + a; // Using global 'a'
    y = y + a;     // Using global 'a'
    b = (*x) + y;  // Modifies global 'b'
    return a + b;  // Returns sum of 'a' and 'b'
}

int main()
{
    std::cout << "Hello World!" << std::endl;

    a = 2;
    b = 3;

    std::cout << fce(&a, b) << std::endl;

    int z = 10;
    int *p = &z; // Pointer 'p' stores the address of 'z'
    int *super = &z;
    std::cout << "Value of z: " << z << std::endl;   // Outputs 10
    std::cout << "Value of *p: " << *p << std::endl; // Outputs 10 (because *p == a)

    *p = 20; // Modifies the value at the address 'p' points to (which is 'a')

    std::cout << "New value of z: " << z << std::endl;   // Outputs 20
    std::cout << "New value of *p: " << *p << std::endl; // Outputs 20

    *super = 50;

    std::cout << "New value of z: " << z << std::endl;           // Outputs 50
    std::cout << "New value of *p: " << *p << std::endl;         // Outputs 50
    std::cout << "New value of *super: " << *super << std::endl; // Outputs 50

    return 0;
}
