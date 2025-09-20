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
};

int main() {
    const int STUDENT_SIZE = 3; 
    const int GRADE_COUNT = 3; 
    Student* students = new Student[STUDENT_SIZE];
    
    // creates student 1
    students[0].name = "John Doe"; 
    students[0].studentID = 541675; 
    students[0].graduationYear = 2027; 
    students[0].grades = new double[GRADE_COUNT]{92, 87, 89.5}; 

    // creates student 2
    students[1].name = "Joe Smith"; 
    students[1].studentID = 259741; 
    students[1].graduationYear = 2026; 
    students[1].grades = new double[GRADE_COUNT]{78, 84, 81}; 

    // creates student 3
    students[2].name = "Travis Smoe"; 
    students[2].studentID = 896020; 
    students[2].graduationYear = 2026; 
    students[2].grades = new double[GRADE_COUNT]{75, 79, 77.5}; 

    return 0; 
}