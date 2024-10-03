#include <iostream>
using namespace std;

class Invoice {
    private:
        string partNo;
        string partDesc;
        int quantity;
        double price;

    public:
        Invoice(string partNo, string partDesc, int quantity, double price) {
            this->partNo = partNo;
            this->partDesc = partDesc;
            setQuantity(quantity);
            setPrice(price);
        }

        void setInfo(string partNo, string partDesc, int quantity, double price) {
            this->partNo = partNo;
            this->partDesc = partDesc;
            setQuantity(quantity);
            setPrice(price);
        }

        void setQuantity(int quantity) {
            this->quantity = (quantity > 0) ? quantity : 0;
        }

        void setPrice(double price) {
            this->price = (price > 0) ? price : 0.0;
        }

        void getInfo() {
            cout << "PART NUMBER - " << partNo << endl;
            cout << "PART DESCRIPTION - " << partDesc << endl;
            cout << "QUANTITY - " << quantity << endl;
            cout << "PRICE PER ITEM - " << price << endl;
        }

        double getInvoiceAmount() {
            return quantity * price;
        }
};

int main() {
    Invoice v1("10E", "HANDLE", 10, 100);
    cout << "TOTAL AMOUNT IS --> " << v1.getInvoiceAmount() << endl;
    v1.getInfo();
    cout << endl ;
    Invoice v2("40E", "BRAKE", -100, 20);
    cout << "TOTAL AMOUNT IS --> " << v2.getInvoiceAmount() << endl;
    v2.getInfo();

    return 0;
}
