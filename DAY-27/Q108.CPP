#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[50];
    float m1, m2, m3, total, percentage;
};

int main()
{
    Student s;
    char grade;

    cout << "===== MARKSHEET GENERATION SYSTEM =====\n";

    cout << "Enter Roll Number: ";
    cin >> s.roll;

    cout << "Enter Student Name: ";
    cin >> s.name;

    cout << "Enter Marks of Subject 1: ";
    cin >> s.m1;

    cout << "Enter Marks of Subject 2: ";
    cin >> s.m2;

    cout << "Enter Marks of Subject 3: ";
    cin >> s.m3;

    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3;

    if (s.percentage >= 90)
        grade = 'A';
    else if (s.percentage >= 75)
        grade = 'B';
    else if (s.percentage >= 60)
        grade = 'C';
    else if (s.percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n========== MARKSHEET ==========";
    cout << "\nRoll Number : " << s.roll;
    cout << "\nName        : " << s.name;
    cout << "\nSubject 1   : " << s.m1;
    cout << "\nSubject 2   : " << s.m2;
    cout << "\nSubject 3   : " << s.m3;
    cout << "\nTotal Marks : " << s.total << "/300";
    cout << "\nPercentage  : " << s.percentage << "%";
    cout << "\nGrade       : " << grade;

    if (grade == 'F')
        cout << "\nResult      : FAIL";
    else
        cout << "\nResult      : PASS";

    return 0;
}