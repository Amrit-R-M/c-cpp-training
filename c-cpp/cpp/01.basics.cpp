#include <iostream> // Access to cout and cin (c++: input/output tools)

using namespace std; // Let's us use cout/cin directly instead of writing srd: :cout everytime

int main()
{

    // Declaring variables
    int age = 21;
    float price = 9.99;
    char grade = 'A';

    // cout prints output << sends the value into cout to be displayed
    cout << "Age: " << age << endl; // endl prints a new line
    cout << "Price: " << price << endl;
    cout << "Grade: " << grade << endl;

    // Size of works exactly same as in C
    cout << "Size of int: " << sizeof(int) << "bytes" << endl;

    // Taking User Input
    int userAge;
    cout << "Enter your age: ";
    cin >> userAge; // pulls the typed value into userAge
    cout << "You entered: " << userAge << endl;

    return 0;
}