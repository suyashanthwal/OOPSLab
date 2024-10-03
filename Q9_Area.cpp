#include <iostream>
using namespace std ;

class calculate{
    public :
    void area(int b , int h){
        cout << "AREA OF THE CIRCLE IS :" << 0.5*b*h << endl ;
    }

    void area(int s){
        cout << "ARER OF SQUARE : " << s*s << endl ;
    }

    void area(int l , int b){
        cout << "AREA OF RECTANGLE :" << l*b << endl ;
    }
};

int main() {
    calculate c1 ;
    c1.area(10 , 50) ;
    c1.area(20) ;
    c1.area(10 ,20) ;

return 0 ;
}