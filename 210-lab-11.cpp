// COMSC 210 | Lab 11 | Majd Bohsali
// IDE used: Visual Studio Code 
#include <iostream>
using namespace std; 

struct Student {
    string name;
    int studentID; 
    int graduationYear; 
    double* grades; 
};

int main() {
    const int STUDENT_SIZE = 5; 
    Student* students = new Student[STUDENT_SIZE];
    for(int i = 0; i < STUDENT_SIZE; i++) { 
        cout << "Enter data for student #" << (i+1) << endl;
        cout << "\t> Student name: ";
        cin >> (*(students + i)).name;  
    }
    return 0; 
}