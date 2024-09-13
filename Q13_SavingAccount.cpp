#include <iostream>
using namespace std;

class SavingsAccount {
private:
    double savingsBalance;

    static double annualInterestRate;

public:
    SavingsAccount(double balance){
        this->savingsBalance = balance ;
    }

    void calculateMonthlyInterest() {
        double monthlyInterest = (savingsBalance * this->annualInterestRate) / 12;
        savingsBalance += monthlyInterest;
    }

    static void modifyInterestRate(double newRate) {
        annualInterestRate = newRate;
    }

    double getBalance() const {
        return savingsBalance;
    }
};

    double SavingsAccount::annualInterestRate=0.0 ;

int main() {

    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);

    SavingsAccount::modifyInterestRate(0.04);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "Balances after 1 month at 4% annual interest rate:" << endl;
    cout << "Saver 1: Rs " << saver1.getBalance() << endl;
    cout << "Saver 2: Rs " << saver2.getBalance() << endl;

    SavingsAccount::modifyInterestRate(0.05);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "Balances after next month at 5% annual interest rate:" << endl;
    cout << "Saver 1: Rs " << saver1.getBalance() << endl;
    cout << "Saver 2: Rs " << saver2.getBalance() << endl;

    return 0;
}
