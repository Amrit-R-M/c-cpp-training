#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int score;
};

int main()
{
    // An array where EACH element is a full struct, not just a simple type
    Student students[3] = {
        {"Amrit", 90},
        {"Jordan", 85},
        {"Sam", 78}};

    // Looping through the array, accessing struct fields with dot notation
    for (int i = 0; i < 3; i++)
    {
        cout << students[i].name << ": " << students[i].score << endl;
    }

    // Finding the highest score using what we already know
    int highestScore = students[0].score;
    string topStudent = students[0].name;

    for (int i = 1; i < 3; i++)
    {
        if (students[i].score > highestScore)
        {
            highestScore = students[i].score;
            topStudent = students[i].name;
        }
    }

    cout << "Top student: " << topStudent << " with " << highestScore << endl;

    return 0;
}