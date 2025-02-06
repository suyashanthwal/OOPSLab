#include <iostream>
using namespace std;

class calculate {
    public:
    // Overloaded function for the area of a triangle with 3 parameters
    void area(int b, int h, bool isTriangle) {
        if (isTriangle) {
            cout << "AREA OF THE TRIANGLE IS: " << 0.5 * b * h << endl;
        }
    }

    // Overloaded function for the area of a square
    void area(int s) {
        cout << "AREA OF SQUARE: " << s * s << endl;
    }

    // Overloaded function for the area of a rectangle
    void area(int l, int b) {
        cout << "AREA OF RECTANGLE: " << l * b << endl;
    }
};

int main() {
    calculate c1;
    c1.area(10, 50, true);  // Triangle
    c1.area(20);            // Square
    c1.area(10, 20);        // Rectangle

    return 0;
}
