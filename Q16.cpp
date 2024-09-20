#include <iostream>
using namespace std;

class func {
    private:
        int x;

    public:
        func(int x) {
            this->x = x;
        }

        friend func operator++(func x) {
        func f ;
         f.x = f.x+1 ;
         return f ;
        }

        friend func operator--(func f) {
            f.x = f.x-1 ;
            return func(f.x) ;
        }

        void display() {
            cout << x << endl;
        }
};

int main() {
    func f1(7);
    f1.display();
    f1++;
    f1.display();
    f1--;
    f1.display();

    return 0;
}