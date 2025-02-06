#include <iostream>
using namespace std;

class A {
public:
    void func(int &val) {
        val *= 2;
    }
};

class B {
public:
    void func(int &val) {
        val *= 3;
    }
};

class C {
public:
    void func(int &val) {
        val *= 5;
    }
};

class D : public A, public B, public C {
private:
    int val; 

public:
    D() : val(1) {}

    int get_val() {
        return val;
    }

    void update_val(int new_val) {
        while (val < new_val) {
            if (new_val % val == 0) {
                if ((new_val / val) % 2 == 0) {
                    A::func(val);
                } else if ((new_val / val) % 3 == 0) {
                    B::func(val);
                } else if ((new_val / val) % 5 == 0) {
                    C::func(val);
                }
            }
        }
    }
};


int main() {
    D d;
    cout << "Initial value: " << d.get_val() << endl;
    d.update_val(30);
    cout << "Updated value: " << d.get_val() << endl;

    return 0;
}
