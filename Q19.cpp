#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int age;
    string name;
    string enroll_no;
    float marks;

public:
    Student(int a, string n, string e, float m)
        : age(a), name(n), enroll_no(e), marks(m) {}

    void display() {
        cout << "Student Information:\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Enrollment Number: " << enroll_no << "\n";
        cout << "Marks: " << marks << "\n";
    }
};

class Faculty {
protected:
    string facultyName;
    string facultyCode;
    float salary;
    string deptt;
    int age;
    int experience;
    string gender;

public:
    Faculty(string fName, string fCode, float sal, string d, int a, int exp, string g)
        : facultyName(fName), facultyCode(fCode), salary(sal), deptt(d), age(a), experience(exp), gender(g) {}

    void display() {
        cout << "Faculty Information:\n";
        cout << "Name: " << facultyName << "\n";
        cout << "Age: " << age << "\n";
        cout << "Faculty Code: " << facultyCode << "\n";
        cout << "Salary: " << salary << "\n";
        cout << "Department: " << deptt << "\n";
        cout << "Experience: " << experience << " years\n";
        cout << "Gender: " << gender << "\n";
    }
};

class Person : public Student, public Faculty {
public:
    Person(int studentAge, string studentName, string enrollNo, float studentMarks,
           string facultyName, string facultyCode, float facultySalary, string department,
           int facultyAge, int experience, string gender)
        : Student(studentAge, studentName, enrollNo, studentMarks),
          Faculty(facultyName, facultyCode, facultySalary, department, facultyAge, experience, gender) {}

    void displayBoth() {
        cout << "Displaying Student and Faculty Information:\n";
        Student::display();
        cout << "\n";
        Faculty::display();
    }
};

int main() {
    cout << "Enter Student Details:\n";
    string studentName, enrollNo;
    int studentAge;
    float studentMarks;

    cout << "Name: ";
    cin >> studentName;
    cout << "Age: ";
    cin >> studentAge;
    cout << "Enrollment Number: ";
    cin >> enrollNo;
    cout << "Marks: ";
    cin >> studentMarks;

    cout << "\nEnter Faculty Details:\n";
    string facultyName, facultyCode, department, gender;
    float facultySalary;
    int facultyAge, experience;

    cout << "Name: ";
    cin >> facultyName;
    cout << "Age: ";
    cin >> facultyAge;
    cout << "Faculty Code: ";
    cin >> facultyCode;
    cout << "Salary: ";
    cin >> facultySalary;
    cout << "Department: ";
    cin >> department;
    cout << "Experience (in years): ";
    cin >> experience;
    cout << "Gender: ";
    cin >> gender;

    Person person(studentAge, studentName, enrollNo, studentMarks,
                  facultyName, facultyCode, facultySalary, department,
                  facultyAge, experience, gender);

    cout << "\n";
    person.displayBoth();

    return 0;
}
