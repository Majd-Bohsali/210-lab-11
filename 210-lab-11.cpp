// COMSC 210 | Lab 11 | Majd Bohsali
// IDE used: Visual Studio Code 
#include <iostream>
#include <string> 
using namespace std; 

struct Student {
    string name;
    int studentID; 
    int graduationYear; 
    double* grades; 

    // Destructor to free dynamic memory and avoid memory leak
    ~Student() { 
        delete[] grades; 
    }
};

int main() {
    const int STUDENT_SIZE = 3; 
    const int GRADE_COUNT = 3; 
    Student* students = new Student[STUDENT_SIZE];
    int n = 0; // tracks student data being entered 

    // creates student 1
    (*(students + n)).name = "John Doe"; 
    (*(students + n)).studentID = 541675; 
    (*(students + n)).graduationYear = 2027; 
    (*(students + n)).grades = new double[GRADE_COUNT]{92, 87, 89.5}; 

    // creates student 2
    n++; 
    (*(students + n)).name = "Joe Smith"; 
    (*(students + n)).studentID = 259741; 
    (*(students + n)).graduationYear = 2026; 
    (*(students + n)).grades = new double[GRADE_COUNT]{78, 84, 81}; 

    // creates student 3
    n++; 
    (*(students + n)).name = "Travis Smoke"; 
    (*(students + n)).studentID = 896020; 
    (*(students + n)).graduationYear = 2026; 
    (*(students + n)).grades = new double[GRADE_COUNT]{75, 79, 77.5}; 

    // outputs students information
    for(int i = 0; i < STUDENT_SIZE; i++) { 
        cout << "Name: " << (*(students + i)).name << endl; 
        cout << "Graduation Year: " << (*(students + i)).graduationYear << endl;
        cout << "Student ID: " << (*(students + i)).studentID << endl;  
        cout << "Grades: "; 
        // outputs all grades on one line
        for(int j = 0; j < GRADE_COUNT; j++) { 
            cout << *((*(students + i)).grades + j) << " "; 
        }
        cout << endl << endl; // skips extra line in output 
    }

    delete[] students; // deletes students data 
    return 0; 
}