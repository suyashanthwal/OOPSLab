#include <iostream>
using namespace std; 

class Student {
private:
    string name;
    int age;
    int marks;

public :
    void setDetails(string studentName, int studentAge, int studentMarks) {
        name = studentName;
        age = studentAge;
        marks = studentMarks;
    }

    void displayDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student Marks: " << marks << endl;
    }

    void checkPass() {
        if (marks >= 40) {
            cout << name << " has passed." << endl;
        } else {
            cout << name << " has failed." << endl;
        }
    }
};

int main() {
    Student student1;
    student1.setDetails("Alice", 18, 75);
    student1.displayDetails();
    student1.checkPass();

    return 0;
}
