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

    return 0;
}
