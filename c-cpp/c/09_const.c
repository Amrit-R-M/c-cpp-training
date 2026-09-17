#include <stdio.h>

int main()
{
    const int MAX_SPEED = 120; // const = value cannot be changed after this

    printf("Max speed: %d\n", MAX_SPEED);

    // MAX_SPEED = 150;   // uncommenting this line would cause a compile error

    return 0;
}