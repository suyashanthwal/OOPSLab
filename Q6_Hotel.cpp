#include <iostream>
using namespace std;

class Hotel {
private:
    int Rno;
    string Name;
    int Tariff;
    int NOD;

    double CALC() {
        if (Tariff > 10000)
            return NOD * Tariff * 1.05;
        else
            return NOD * Tariff;
    }

public:
    void Checkin(int rno, string name, int tariff, int nod) {
        Rno = rno;
        Name = name;
        Tariff = tariff;
        NOD = nod;
    }

    void Checkout() {
        cout << "Room No: " << Rno << endl;
        cout << "Customer Name: " << Name << endl;
        cout << "Tariff: " << Tariff << endl;
        cout << "No. of Days: " << NOD << endl;
        double amount = CALC();
        cout << "Amount: " << amount << endl;
    }
};

int main() {
    Hotel h;
    int rno ;
    string name ;
    int tariff ;
    int nod ;
    cout << "ENTER THE ROOM NUMBER " ; 
    cin >> rno ;

    cout << "ENTER YOUR NAME : " ;
    cin >> name ;

    cout << "ENTER PER DAY CHARGES " ;
    cin >> tariff ;
    cout << "ENTER NUMBER OF DAYS " ;
    cin >> nod ;

    h.Checkin(rno, name , tariff, nod);
    h.Checkout();
    return 0;
}