#include <iostream> // Access to cout and cin (c++: input/output tools)
#include <string>   // Access to string type (Advantage we have in c++ over C)
#include <vector>   // Access to the vector type (No fixed size of arrays, can grow and shrink)

using namespace std;

int main()
{

    // ARRAYS Fixed-Size Array of 5 integers, initialized with values
    int numbers[5] = {10, 20, 30, 40, 50};

    // Accessing individual elements of the array using index (0-based)
    cout << "First element:" << numbers[0] << endl;
    cout << "Second element:" << numbers[1] << endl;

    // Looping through the whole array using it's index
    cout << "All elements in the array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << endl;
    }

    // STRINGS (C++ has a built-in string type, unlike C)
    string name = "Amrit";
    cout << "Name:" << name << endl;
    cout << "Length of name:" << name.length() << endl;

    // VECTORS (A resizable array, can grow and shrink in size)
    vector<int> scores;   // Declaring a vector (starts empty no fixed size)
    scores.push_back(90); // Adding elements to the vector
    scores.push_back(95);
    scores.push_back(105);

    cout << "Vector Contents: " << endl;
    for (int i = 0; i < scores.size(); i++)
    {                              // .size() returns current number of elements
        cout << scores[i] << endl; // Accessing the elements using index
    }

    return 0;
}
