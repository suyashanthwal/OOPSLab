#include <iostream>
using namespace std ;

int main() {
    string st ;

    cout << "ENTER A STRING : " ;
    getline(cin ,st) ;

    for(int i = 0; i < st.length(); i++) {
        bool Unique = true;
        for(int j = 0; j < st.length(); j++) {
            if(i != j && st[i] == st[j]) {
                Unique = false;
                break;
            }
        }
        if(Unique) {
            cout << st[i] << " ";
        }
    }

    return 0 ;
}