#include <iostream>

#include <string>

using namespace std;

// A struct groups multiple related variables into one custom type
// Instead of having seperate variables for name/age/gpa, we can bundle them together
// under one student type since they all describe one student.

struct Student
{
    string name;
    int age;
    float gpa;
};

int main()
{
    // Creating a variable of studeent type
    Student s1;

    s1.name = "Amrit";
    s1.age = 20;
    s1.gpa = 3.8;

    cout << "Student Nmae : " << s1.name << endl;
    cout << "Student Age : " << s1.age << endl;
    cout << "Student GPA : " << s1.gpa << endl;

    // Shortcut filling in all feilds at once, in the SAME order
    // they were decalred  in the struct (name , age, gpa)
    Student s2 = {"John", 22, 3.5};

    cout << "Name: " << s2.name << "Age: " << s2.age << "GPA: " << s2.gpa << endl;

    return 0;
}