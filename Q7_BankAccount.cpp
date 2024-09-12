#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    string name;
    int accno;
    string acctype;
    float balance;

public:
    void assign(string name, int accno, string acctype, float balance) {
        this->name = name;
        this->accno = accno;
        this->acctype = acctype;
        this->balance = balance;
    }

    void deposit(float amount) {
        if (amount > 0) {
            this->balance += amount;
            cout << "Total balance is now: " << this->balance << endl;
        } else {
            cout << "Amount must be positive!" << endl;
        }
    }

    void withdraw(float amount) {
        if (amount > 0) {
            if (amount <= this->balance) {
                this->balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "Insufficient balance!" << endl;
            }
        }
    }

    void display() {
        cout << "Account Holder: " << this->name << endl;
        cout << "Account Number: " << this->accno << endl;
        cout << "Account Type: " << this->acctype << endl;
        cout << "Current Balance: " << this->balance << endl;
    }
};

int main() {
    Bank myAccount ;

    string name, acctype;
    int accno;
    float balance;
    
    cout << "Enter account holder's name: ";
    getline(cin, name);
    
    cout << "Enter account number: ";
    cin >> accno;
    
    cout << "Enter account type (e.g., Saving, Checking): ";
    cin.ignore() ;
    getline(cin, acctype);
    
    cout << "Enter initial balance: ";
    cin >> balance;

    myAccount.assign(name, accno, acctype, balance);

    myAccount.display();

    float amount;
    
    cout << "Enter amount to deposit: ";
    cin >> amount;
    myAccount.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    myAccount.withdraw(amount);

    myAccount.display();

    return 0;
}
