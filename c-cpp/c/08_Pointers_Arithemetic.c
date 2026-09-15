#include <stdio.h>

int main()
{
    // A normal array of 5 integers - these sit next to each other in memory
    int numbers[5] = {10, 20, 30, 40, 50};

    // In C, an array's name automatically acts as a pointer to its FIRST element
    // So 'ptr' now holds the memory address of numbers[0]
    int *ptr = numbers;

    // *ptr means "go to the address ptr is holding, and give me the value there"
    // Since ptr points to numbers[0], this prints 10
    printf("First value: %d\n", *ptr);

    // (ptr + 1) moves the pointer forward by ONE element (not one byte)
    // Since ptr currently points to numbers[0], ptr+1 now points to numbers[1]
    // *(ptr + 1) dereferences that new address, giving us the value there: 20
    printf("Second value: %d\n", *(ptr + 1));

    // Same idea - ptr+2 points to numbers[2], so *(ptr+2) gives us 30
    printf("Third value: %d\n", *(ptr + 2));

    // We can loop through the whole array using this same technique
    // i goes from 0 to 4, and (ptr + i) points to numbers[i] each time
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i)); // dereference to get each value
    }
    printf("\n");

    // ptr++ actually MOVES the pointer itself forward by one element
    // Before this line, ptr points to numbers[0]. After, it points to numbers[1]
    ptr++;

    // Now dereferencing ptr gives us 20, since ptr has moved forward
    printf("After ptr++, points to: %d\n", *ptr);

    return 0;
}