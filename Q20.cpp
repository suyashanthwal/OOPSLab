#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
    virtual void display() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

class Engineer : virtual public Person {
protected:
    string specialization;

public:
    Engineer(string n, int a, string spec) : Person(n, a), specialization(spec) {}
    void display() override {
        Person::display();
        cout << "Specialization: " << specialization << "\n";
    }
};

class Manager : virtual public Person {
protected:
    int teamSize;

public:
    Manager(string n, int a, int tSize) : Person(n, a), teamSize(tSize) {}
    void display() override {
        Person::display();
        cout << "Team Size: " << teamSize << "\n";
    }
};

class TeamLead : public Engineer, public Manager {
private:
    int projectsHandled;

public:
    TeamLead(string n, int a, string spec, int tSize, int proj)
        : Person(n, a), Engineer(n, a, spec), Manager(n, a, tSize), projectsHandled(proj) {}

    void display() override {
        cout << "Team Lead Information:\n";
        Person::display(); // Call the common base class method
        cout << "Specialization: " << specialization << "\n";
        cout << "Team Size: " << teamSize << "\n";
        cout << "Projects Handled: " << projectsHandled << "\n";
    }
};

int main() {
    TeamLead lead("Alice", 35, "Software Engineering", 10, 5);
    lead.display();
    return 0;
}
