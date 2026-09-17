#include <iostream>
using namespace std;

int main()
{
    int age = 20;

    // Ternary operator: condition ? valueIfTrue : valueIfFalse
    // Shortcut for a simple if/else in one line
    string status = (age >= 18) ? "Adult" : "Minor";

    cout << "Status: " << status << endl;

    return 0;
}