
#include <stdio.h> //gives access to printf

int main()
{

    // IF statement runs only if the conditions inside is true
    int age = 20;
    if (age >= 18)
    {
        printf("You are an adult\n");
    }

    // IF/ELSE Runs one block if true another block if false
    int age2 = 15;
    if (age2 >= 18)
    {
        printf("Adult\n");
    }
    else
    {
        printf("Minor\n");
    }

    // IF/ELSE IF/ELSE Check multiple conditions in order, stops at the first true one
    int score = 75;
    if (score >= 90)
    {
        printf("Grade: A/n");
    }
    else if (score >= 70)
    {
        printf("Grade: B\n");
    }
    else
    {
        printf("Grade: C\n");
    }

    // "SWITCH" compares a varaible against several other exact values
    int day = 3;
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break; // Stops here once it matches, skips the rest
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n"); // this one runs since day == 3
        break;
    Default:
        printf("Invalid day\n"); // runs only if nothing else is matched
    }

    // FOR loop repeats a known number of times
    printf("For loop output:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }

    // WHILE loops repeats as long as the conditions is true
    printf("While loop ouputs:\n");
    int j = 0;
    while (j < 5)
    {
        printf("%d\n", j);
        j++;
    }

    // DO-WHILE loop Same as while but runs at least once
    printf("Do-while loop ouputs:\n");
    int k = 0;
    do
    {
        printf("%d\n", k);
        k++;
    } while (k < 5);

    return 0;
}