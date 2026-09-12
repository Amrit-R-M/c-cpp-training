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
{ // default parameter
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

int main()
{

    // Calling a basic function
    int sum = add(5, 3);
    cout << "Sum: " << sum << endl;

    // Calling the overloaded double version
    double sumDecimal = add(2.5, 3.5);
    cout << "Sum decimal: " << sumDecimal << endl;

    // Calling a void function
    greet("Amrit");
    greet(); // uses default value "friend"

    // Demonstrating pass by value - original stays unchanged
    int num1 = 5;
    addOneByValue(num1);
    cout << "After pass by value: " << num1 << endl; // still 5

    // Demonstrating pass by reference - original DOES change
    int num2 = 5;
    addOneByReference(num2);
    cout << "After pass by reference: " << num2 << endl; // now 6

    return 0;
}
