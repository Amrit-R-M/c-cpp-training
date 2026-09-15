#include <iostream> // gives access to cout
using namespace std;

int main()
{

    int num = 10; // normal variable holding the value 10

    int &ref = num; // ref is now just another name for num - not a copy, not a separate variable

    // Printing both - they should show the same value, since they're the same variable
    cout << "num: " << num << endl;
    cout << "ref: " << ref << endl;

    // Changing ref changes num too, since they're literally the same memory
    // Notice no * needed here, unlike pointers
    ref = 20;
    cout << "After ref = 20, num: " << num << endl;

    // It works the other way as well - changing num changes ref too
    num = 30;
    cout << "After num = 30, ref: " << ref << endl;

    return 0;
}