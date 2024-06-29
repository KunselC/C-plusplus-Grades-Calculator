#include <iostream>
#include <cmath>
using namespace std;

/*Write a program that prompts the user to enter the points earned for a course and determines the
grade based on the following rules*/
int main()
{
    //Defining variable
    double grade;
    //Asking user for grade
    cout << "Please enter your grade points between 0 and 100: ";
    //Asking user for input
    cin >> grade;
    //Defining variable
    char gradeLetter;
    //Classifiying points into grade
    if (grade >= 90) {
        gradeLetter = 'A';
    }
    else if (grade < 90 && grade >= 80) {
        gradeLetter = 'B';
    }
    else if (grade < 80 && grade >= 70) {
        gradeLetter = 'C';
    }
    else if (grade < 70 && grade >= 60) {
        gradeLetter = 'D';
    }
    else if (grade < 60 && grade >= 0) {
        gradeLetter = 'F';
    }
    else {
        cout << "Please enter a number between 0 and 100";
    }
    // Print message using switch statement
    switch (gradeLetter) {
        case 'A':
            cout << "Excellent" << endl;
            break;
        case 'B':
            cout << "Very Good" << endl;
            break;
        case 'C':
            cout << "Good" << endl;
            break;
        case 'D':
            cout << "Try Harder Next Time" << endl;
        case 'F':
            cout << "Try Harder Next Time" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
            break;
    }
    return 0;
}