#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) {
        value = v;
    }

    Counter& operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }

    Counter& operator--() {
        --value;
        return *this;
    }

    Counter operator--(int) {
        Counter temp = *this;
        --value;
        return temp;
    }

    void display() const {
        cout << "Current Counter Value: " << value << endl;
    }
};

int main() {
    Counter counter(5);
    counter.display();
    cout << "After Pre-Increment: " << endl;
    ++counter;
    counter.display();
    cout << "After Post-Increment: " << endl;
    counter++;
    counter.display();
    cout << "After Pre-Decrement: " << endl;
    --counter;
    counter.display();
    cout << "After Post-Decrement: " << endl;
    counter--;
    counter.display();
    return 0;
}
