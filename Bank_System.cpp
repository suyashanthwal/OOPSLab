#include <iostream>
#include <exception>
using namespace std ;

class myexception {
    public:
    const char* what() const throw() {
        return "INSUFFICIENT BALANCE";
    }
};


class Bank {
    private:
    int userID ;
    int password ;
    float balance ;
    int accNO ;


    public :
    void createACC() {
        cout << "ENTER USER ID : " ;
        cin >> userID ;

        cout << "ENTER PASSWORD : " ;
        cin >> password  ;

        cout << "CONFIRM PASSWORD : " ;
        int confirm ;
        cin >> confirm ;
        if (confirm == password) {
            cout << "INITIALISE BALANCE : " ;
            cin >> balance ;
            cout << "ENTER ACC NO : " ;
            cin >> accNO ;
            cout << "ACCOUNT CREATED" ;
            }
            else {
                cout << "PASSWORD DOES NOT MATCH" ;
                }
    }

        void login() {
            int ID ;
            int pass ;
            cout << "ENTER USER ID : " ;
            cin >> ID ;
            cout << "ENTER PASSWORD : " ;
            cin >> pass ;
            if (ID == this->userID && pass == this->password) {
                cout << "LOGIN SUCCESSFUL \n" ;
            }

            cout << "WELCOME TO BANK \n" ;
            int choice ;
            while(choice != 4) {
            cout << "1. CHECK BALANCE , 2. TRANSFER MONEY ,3. ADD MONEY  4. EXIT \n";
            cin >> choice ;
            switch (choice) {
                case 1 :
                cout << "YOUR CURRENT BALANCE IS : " << this->balance << endl ;
                break ;
                case 2 :
                cout << "ENTER AMOUNT TO TRANSFER : " ;
                try {
                float amount ;
                cin >> amount ;
                if (amount <= this->balance) {
                    this->balance = this->balance - amount ;
                    cout << "TRANSACTION SUCCESSFUL \n" ;
                    }
                 else {
                myexception e ;
                throw e ;
                }
                }
                catch(myexception e) {
                      cout << e.what() ;
                }
                break ;
                case 3 :
                cout << "ENTER AMOUNT TO ADD : " ;
                float add ;
                cin >> add ;
                this->balance = this->balance + add ;
                cout << "TRANSACTION ADD SUCCESSFUL \n" ;
                break ;

                case 4 :
                cout << "EXITING ... \n" ;
                break ;
                }  
            }       
    }
};


int main() {
    int choice ;

    while(1) {
    cout << "1. CREATE ACCOUNT , 2. LOGIN , 3. EXITING \n" ;
    cin >> choice ;
    switch (choice) {
        case 1 :
        Bank account ;
        account.createACC() ;
        break ;

        case 2 :
        account.login() ;
        break ;

        case 3 :
        cout << "EXITING" ;
        return 0 ;
    }
    }


}