#include <iostream>
#include <string>
using namespace std;

// A function that returns a value
int add(int a, int b)
{
    return a + b;
}

// An overloaded version - same name, different parameter types
double add(double a, double b)
{
    return a + b;
}

// A void function - does something but returns nothing
void greet(string name = "friend")
{
    cout << "Hello, " << name << "!" << endl;
}

// Pass by value - only affects the local copy
void addOneByValue(int x)
{
    x = x + 1;
}

// Pass by reference - affects the original variable
void addOneByReference(int &x)
{
    x = x + 1;
}

// Swaps two integers using references - a temp variable holds one value
// so it isn't lost while we overwrite it
void swapValues(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Returns true if n is even, false if odd
// n % 2 gives 0 for even numbers, 1 for odd numbers
bool isEven(int n)
{
    return n % 2 == 0;
}

int main()
{
    int sum = add(5, 3);
    cout << "Sum: " << sum << endl;

    double sumDecimal = add(2.5, 3.5);
    cout << "Sum decimal: " << sumDecimal << endl;

    greet("Amrit");
    greet();

    int num1 = 5;
    addOneByValue(num1);
    cout << "After pass by value: " << num1 << endl;

    int num2 = 5;
    addOneByReference(num2);
    cout << "After pass by reference: " << num2 << endl;

    // Testing swapValues
    int x = 5, y = 10;
    cout << "Before swap: x=" << x << ", y=" << y << endl;
    swapValues(x, y);
    cout << "After swap: x=" << x << ", y=" << y << endl;

    // Testing isEven
    cout << "Is 7 even? " << isEven(7) << endl;
    cout << "Is 8 even? " << isEven(8) << endl;

    return 0;
}