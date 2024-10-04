#include <iostream>
using namespace std;

class Student {
private:
    int marks = 100;          
protected:
    int id = 101;            
public:
    string name = "Suyash";  

    void showMarks() {
        cout << "Marks: " << marks << endl;  
    }
};

class PublicDerived : public Student {
public:
    void display() {
        cout << "Name: " << name << endl;  
        cout << "ID: " << id << endl;      
    }
};

class ProtectedDerived : protected Student {
public:
    void display() {
        cout << "Name: " << name << endl;  
        cout << "ID: " << id << endl;      
    }
};

class PrivateDerived : private Student {
public:
    void display() {
        cout << "Name: " << name << endl;  
        cout << "ID: " << id << endl;      
    }
};

int main() {
    PublicDerived publicDerived;
    publicDerived.display();
    
    ProtectedDerived protectedDerived;
    protectedDerived.display();
    
    PrivateDerived privateDerived;
    privateDerived.display();

    return 0;
}
