#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numCourses;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "CGPA calculator" << endl;
    cout << "Enter number of courses: ";
    cin >> numCourses;

    string courseName[numCourses];
    float grades[numCourses], credits[numCourses];

    for (int i = 0; i < numCourses; i++)
    {
        cin.ignore();

        cout << "\n\n\nEnter Course Name: ";
        getline(cin, courseName[i]);

        cout << "Enter Grade Point: ";
        cin >> grades[i];

        cout << "Enter Credit Hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    float GPA = totalGradePoints / totalCredits;
    float CGPA = GPA;

    cout << "\n     Course Details    " << endl;

    for (int i = 0; i < numCourses; i++)
    {
        cout << courseName[i]
             << " | Grade: " << grades[i]
             << " | Credit Hours: " << credits[i]
             << endl;
    }

    cout << "\nTotal Credits      : " << totalCredits << endl;
    cout << "\nTotal Grade Points : " << totalGradePoints << endl;
    cout << "Semester GPA       : " << GPA << endl;
    cout << "Overall CGPA       : " << CGPA << endl;

    return 0;
}