#include <iostream>
using namespace std ;
class charge { 

private :
string name ; 
int unit ;

public :
void setname(string name) {
this ->name = name ;
}

void setunit(int unit) {
this ->unit = unit;
}

string getname() {
return this ->name ;
}
int getunit() {
return this ->unit ;
}
};


int main() {
charge c1 ;
string s1 ;
int x ;
float charge =0 ;
cout << "ENTER YOUR NAME : " ;
cin >> s1 ;
cout << "ENTER THE UNITS :" ;
cin >> x ;
c1.setname(s1) ;
c1.setunit(x) ;


if(x <= 100) {
charge = (x*60) / 100 ;
} else if (x > 100) {
charge += (100*60) / 100 ;
x -= 100 ;
}
if (x >= 200){
charge += (200*80)/100 ;
x -= 200 ;
} 
if(x != 0) {
charge += (x*90)/100 ;
}

charge += 50 ;
if (charge > 300) {
charge =charge + (0.15*charge) ;
}
cout << "NAME : " ;
cout << c1.getname() ;
cout << "\n" ;
cout <<"YOUR TOTAL BILL IS : " ;
cout << charge ;
return 0 ;
}
