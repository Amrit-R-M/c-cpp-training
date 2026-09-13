#include <stdio.h>  // gives access to printf
#include <string.h> // gives access to string functions like strlen, strcpy, strcmp, etc

int main()
{
    // A string in C is just a char array that ends with a null terminator "\0"(that will indicate the end of the array)
    char name[10] = "Amrit";    // null terminator is added automatically when we use the double quotes to initialize the string
    printf("Name: %s\n", name); // %s tells printf to read cahracters until it hits the null terminator "\0"

    printf("Lenght: %d\n", (int)strlen(name)); // strlen counts the number of visible charcaters until it hits '\0'

    // Copying a string - strcpy copies the contents
    char copy[10];
    strcpy(copy, name);
    printf("Copy: %s\n", copy);

    // Comparing strings can't use ==, must use strcmp
    // strcmp returns 0 if the strings are equal

    if (strcmp(name, "Amrit") == 0)
    {
        printf("Names matches\n");
    }
    else
    {
        printf("Names do not match\n");
    }

    return 0;
}
