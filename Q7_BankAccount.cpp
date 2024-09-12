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
    // Member function to assign initial values
    void assign(string name, int accno, string acctype, float balance) {
        this->name = name;
        this->accno = accno;
        this->acctype = acctype;
        this->balance = balance;
    }

    // Member function to deposit an amount
    void deposit(float amount) {
        if (amount > 0) {
            this->balance += amount;
            cout << "Total balance is now: " << this->balance << endl;
        } else {
            cout << "Amount must be positive!" << endl;
        }
    }

    // Member function to withdraw an amount after checking the balance
    void withdraw(float amount) {
        if (amount > 0) {
            if (amount <= this->balance) {
                this->balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "Insufficient balance!" << endl;
            }
        } else {
            cout << "Withdrawal amount must be positive!" << endl;
        }
    }

    // Member function to display account details
    void display() const {
        cout << "Account Holder: " << this->name << endl;
        cout << "Account Number: " << this->accno << endl;
        cout << "Account Type: " << this->acctype << endl;
        cout << "Current Balance: " << this->balance << endl;
    }
};

int main() {
    Bank myAccount;
    
    // Input account details from user
    string name, acctype;
    int accno;
    float balance;
    
    cout << "Enter account holder's name: ";
    getline(cin, name); // Use getline to allow spaces in the name
    
    cout << "Enter account number: ";
    cin >> accno;
    
    cout << "Enter account type (e.g., Saving, Checking): ";
    cin.ignore(); // Ignore any leftover newline character
    getline(cin, acctype);
    
    cout << "Enter initial balance: ";
    cin >> balance;
    
    // Initialize account details
    myAccount.assign(name, accno, acctype, balance);

    // Display initial account details
    myAccount.display();

    // Perform operations
    float amount;
    
    cout << "Enter amount to deposit: ";
    cin >> amount;
    myAccount.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    myAccount.withdraw(amount);

    // Display updated account details
    myAccount.display();

    return 0;
}
