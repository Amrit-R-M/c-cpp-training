#include <stdio.h> // Line pulls in printf so we can print output to the screen

int main()
{

    int a = 10, b = 3;

    // Arithmetic Operators

    printf("Addition: %d\n", a + b);       // Adds a and b
    printf("Subtraction: %d\n", a - b);    // Subtracts b from a
    printf("Multiplication: %d\n", a * b); // Multiplies a and b
    printf("Division: %d\n", a / b);       // Divides a by b
    printf("Modulus: %d\n", a % b);        // Returns the remainder of a divided by b

    // Comparison Operators
    // These returns either 1 (true) or 0 (false) because C does not have a boolean type

    printf("Is a equal to b? %d\n", a == b);     // Checks if a is equal to b
    printf("Is a not equal to b: %d\n", a != b); // Checks if a is not equal to b
    printf("Is a greater than b? %d\n", a > b);  // Checks if a is greater than b
    printf("Is a less than b? %d\n", a < b);     // checks if a is less than b

    // Logical Operators
    // AND is TRUE only if both sides are TRUE
    printf("(a > 5) AND (b > 2)? %d\n", (a > 5) && (b > 2));

    // OR is TRUE if either side is TRUE
    printf("(a > 5) OR (b < 10)?, %d\n", (a > 5) || (b < 10));

    // ! (NOT) flips the result (a > 5) is TRUE but !TRUE becomes FALSE prints 0
    printf("NOT (a > 5): %d\n", !(a > 5));

    // Assignment Shortcuts
    int x = 5;

    x += 3;
    printf("x after +=3: %d\n", x); // x = x + 3

    x -= 2;
    printf("x after -=2: %d\n", x); // x = x - 2

    x *= 2;
    printf("x after *=2: %d\n", x); // x = x * 2

    x /= 4;
    printf("x after /=4: %d\n", x); // x = x / 4

    // x++ adds 1 to x

    x++;
    printf("x after x++: %d\n", x); // x = x + 1

    x--;
    printf("x after x--: %d\n", x); // x = x - 1

    return 0; // Every main() function should return 0 to signal program finished successfully
}