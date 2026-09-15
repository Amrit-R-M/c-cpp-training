#include <stdio.h> // gives access to printf

int main()
{
    // 2D Arrays is a grid that contains rows and columns.
    int matrix[2][3] =
        {
            {
                1,
                2,
                3,
            },
            {
                4,
                5,
                6,
            }};

    // Accessing rows and coloumns
    printf("Element at [0][0]: %d/n", matrix[0][0]);
    printf("Element at [0][1]: %d/n", matrix[0][1]);

    // Loop through every elements in the 2D array using the nested loops
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[1][j]);
        }
        printf("/n");
    }
    return 0;
}