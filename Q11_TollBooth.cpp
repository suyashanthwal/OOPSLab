#include <iostream>
#include <conio.h> 
using namespace std;

class TollBooth {
private:
    unsigned int cars;
    double money;

public:

    TollBooth() {
        cars = 0;
        money = 0.0;
    }

    void payingCars() {
        cars++;
        money += 0.5;
    }

    void nonPayingCars() {
        cars++;
    }

    void display() {
        cout << "TOTAL CARS -> " << cars << endl;
        cout << "TOTAL CASH COLLECTED -> $" << money << endl;
    }
};

int main() {
    TollBooth t;
    char choice;

    while (true) {
        cout << "Press 1 for a PAYING car, 2 for a NON-PAYING car, or ESC to print totals and exit." << endl;
        choice = getch();

        if (choice == 27) { 
            t.display();
            cout << "Exiting program." << endl;
            break;
        }

        switch (choice) {
            case '1':
                t.payingCars();
                cout << "PAYING CAR REGISTERED!" << endl;
                break;
            case '2':
                t.nonPayingCars();
                cout << "NON-PAYING CAR REGISTERED!" << endl;
                break;
            default:
                cout << "INVALID INPUT. Please press 1, 2, or ESC." << endl;
                break;
        }
    }

    return 0;
}
