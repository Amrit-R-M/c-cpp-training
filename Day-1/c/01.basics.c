#include <stdio.h> //Line pulls in prtintf and other I/O tools

// Entry point for every C program
int main()
{

    // Declaring 3 variables of diff data types
    int age = 25;
    float price = 9.99;
    char grade = 'A';

    // Printing each variable using it's matching format specifier
    printf("Age: %d\n", age);      // %d is a placeholder for an integer value
    printf("float: %2f\n", price); // %f is a placeholder for a flaot value
    printf("Grade: %c\n", grade);  //%c is a placeholder for a character value

    // sizeof tells how many bytes each type takes us in memory
    printf("Size of int: %zu bytes\n", sizeof(age)); // %zu is a placeholder for size_t value
    printf("Size of float: %zu bytes\n", sizeof(price));
    printf("Size of char: %zu bytes\n", sizeof(grade));

    // Signed can be nagetive or postive but usigned can be only O or above(positive)
    int signedNum = -10;
    unsigned int unsignedNum = 10;
    printf("Signed Numbers: %d\n", signedNum);
    printf("Unsigned Numbers: %u\n", unsignedNum); // %u is a placeholder for an unsigned int

    // Typecasting: manually converting one type inot another
    int a = 10;
    float castedA = (float)a; //(float) forcers 'a' to be treasted as a float value
    printf("a is int: %d, a casted to flaot: %.1f\n", a, castedA);

    return 0; // Every main() function should return 0 to signla program finished successfully"
}