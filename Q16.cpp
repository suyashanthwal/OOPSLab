#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    friend Counter operator++(Counter& c);
    friend Counter operator++(Counter& c, int); 
    friend Counter operator--(Counter& c); 
    friend Counter operator--(Counter& c, int);

    void display() const {
        cout << "Current Value: " << value << endl;
    }
};

Counter operator++(Counter& c) {
    ++c.value;
    return c;
}

Counter operator++(Counter& c, int) {
    Counter temp = c;
    c.value++;
    return temp;
}

Counter operator--(Counter& c) {
    --c.value;
    return c;
}

Counter operator--(Counter& c, int) {
    Counter temp = c;
    c.value--;
    return temp;
}

int main() {
    Counter counter(5);
    
    counter.display();

    ++counter;
    cout << "After Pre-increment: ";
    counter.display();

    counter++ ;
    cout << "After Post-increment: ";
    counter.display();

    --counter;
    cout << "After Pre-decrement: ";
    counter.display();

    counter--;
    cout << "After Post-decrement: ";
    counter.display();

    return 0;
}
