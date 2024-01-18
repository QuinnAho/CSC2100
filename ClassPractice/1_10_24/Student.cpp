#include "Student.h"
#include <iostream>
using namespace std;

void Student::setID(const string& i) {
    // Validation can be added here
    id = i;
}

string Student::getID() const {
    // Formatting can be done here
    return id;
}

void Student::setMajor(const string& m) {
    major = m;
}

string Student::getMajor() const {
    return major;
}

void Student::setName(const string& n) {
    name = n;
}

string Student::getName() const {
    return name;
}

void Student::setYear(int y) {
    year = y;
}

int Student::getYear() const {
    return year;
}

void Student::PrintInfo() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Major: " << major << endl;
    cout << "Year: " << year << endl;
}

void Student::ChangeMajor(const string& newMajor) {
    if {

        
    }
}
int main() {
    // Example usage
    Student student;
    student.setID("12345");
    student.setName("John Doe");
    student.setMajor("Computer Science");
    student.setYear(2);

    student.PrintInfo();
    
    return 0;
}
