#include <iostream>
using namespace std ;

class student {
    private :
    int marks = 100 ;

    public :
    string name = "Suyash" ;

    protected:
    int id = 101 ;
};

class B:public student 
{
    public:
    void display(){
        cout << name << endl ;
    }

    
};

int main() {
    B s1 ;
    s1.display() ;
}