#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setprecision;
using std::fixed;

int main() 
{
    // pre filled test scores from prof git
    const int MAX_STUDENTS = 10;
    int scores[MAX_STUDENTS] = {
        78, 92, 65, 88, 45, 95, 72, 81, 59, 96,
    };
    const int numStudents = 10;

    //Calculations
    int sum = 0;
    for (int i = 0 ;i < numStudents; i++) {
        sum = sum + scores[i];
    }
    cout << "The sum of the array is:" << sum << endl;
    
    //avg       since we already have the sum we just need to divide by the array 
    float avg;
    avg = (float)sum / numStudents; // float changes temp the sum from int to float which forces it to not loose decimal
    cout << " The average from the array of 10 students is:" << avg << endl;

    //students that pass 

    int studentpass = 0; 

    for (int i = 0; i < numStudents; i++) {
        if (scores[i] >= 70) {
            studentpass++;
        }
    }
    cout << "Number of students who passed from the array: " << studentpass << endl;

    int lowestGrade = scores[0] ;
    for (int i = 1; i < numStudents; i++) {
        if (scores[i] < lowestGrade) {
            lowestGrade = scores[i];
        }
    }
    cout << "Lowest grade from the array:" << lowestGrade << endl;
    int highestGrade = scores[0];
    for (int i = 1; i < numStudents; i++) {
        if (scores[i] > highestGrade) {
            highestGrade = scores[i];
        }
    }
    cout << "Highest grade from the array : " << highestGrade << endl;


    return 0;
}