#include <iostream>
using namespace std;

// enum creates a set of named integer constants, making code more readable and maintainable
enum Day
{
    MONDAY,    // automatically becomes 0
    TUESDAY,   // automatically becomes 1
    WEDNESDAY, // automatically becomes 2
    THURSDAY,  // automatically becomes 3
    FRIDAY     // automatically becomes 4
};

int main()
{
    // using enum instead of a raw number - much cleaner
    Day today = TUESDAY;

    // Since enum values are really just integers underneath, this prints 2
    cout << "Today's value is: " << today << endl;

    // we can compare enum values directly just like regular numbers
    if (today == TUESDAY)
    {
        cout << "It's Tuesday!" << endl;
    }

    return 0;
}
