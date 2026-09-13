#include <stdio.h> // gives access to printf

int main()
{
    // Declaring and initializing an array of 5 integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Accessing the elements of the array using the index (0-based)
    printf("First element: %d\n", numbers[0]);
    printf("Last element: %d\n", numbers[4]);

    // Looping through all the elements to print all of them
    printf("All elements in the array: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }
    return 0;
}