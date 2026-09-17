#include <stdio.h>

void counter()
{
    static int count = 0; // static = keeps its value between function calls
    count++;
    printf("Count: %d\n", count);
}

int main()
{
    counter(); // prints 1
    counter(); // prints 2
    counter(); // prints 3 (without static, it would print 1 every time)

    return 0;
}