#include <iostream>
using namespace std;

class complex {
    private:
    int real ;
    int imag ;

    public:

    complex(int real , int imag){
        this->real = real ;
        this->imag = imag ;
        cout << "complex Number = " << real << "+" << imag <<"i" << endl;
    }

    complex operator +(complex &c){
        this->real = real+c.real ;
        this->imag = imag+c.imag ;
        return complex(real , imag) ;
    }

        complex operator -(complex &c){
        this->real = real-c.real ;
        this->imag = imag-c.imag ;
        return complex(real , imag) ;
    }


        bool operator ==(complex &c){
            if(real == c.real && imag == c.imag ) {
                return true ;
            } else {
                return false ;
        }
}
} ;

int main() {
    complex c1(1,2) ;
    complex c2(3,4) ;
    complex c3(1,2) ;
    complex c4 = c1+c2 ;
    complex c6 = c2-c1;
    if(c1 == c2) {
        cout << "EQUAL" ;
    } else {
        cout << "NOT EQUAL" ;
    }

return 0 ;
}