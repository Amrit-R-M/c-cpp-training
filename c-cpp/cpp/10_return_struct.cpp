#include <iostream>
#include <string>
using namespace std;

struct Point
{
    int x;
    int y;
};

// A function CAN return a whole struct, not just simple types like int
Point createOrigin()
{
    Point p;
    p.x = 0;
    p.y = 0;
    return p;
}

// Function that takes two ints, returns a Point built from them
Point makePoint(int xVal, int yVal)
{
    Point p;
    p.x = xVal;
    p.y = yVal;
    return p;
}

int main()
{
    Point origin = createOrigin();
    cout << "Origin: (" << origin.x << ", " << origin.y << ")" << endl;

    Point p2 = makePoint(5, 10);
    cout << "p2: (" << p2.x << ", " << p2.y << ")" << endl;

    return 0;
}
