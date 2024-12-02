#include <iostream>
using namespace std;

class Shape {
protected:
    double x;
    double y;

public:
    void get_data() {
        cout << "Enter the first dimension (x): ";
        cin >> x;
        cout << "Enter the second dimension (y): ";
        cin >> y;
    }

    virtual void display_area() {
        cout << "Area of the shape is not defined.\n";
    }
};

class Triangle : public Shape {
public:
    void display_area() override {
        double area = 0.5 * x * y; 
        cout << "Area of the triangle: " << area << "\n";
    }
};

class Rectangle : public Shape {
public:
    void display_area() override {
        double area = x * y;
        cout << "Area of the rectangle: " << area << "\n";
    }
};

int main() {
    int choice;
    cout << "Choose the shape to calculate the area:\n";
    cout << "1. Triangle\n";
    cout << "2. Rectangle\n";
    cout << "Enter your choice (1/2): ";
    cin >> choice;

    Shape* shape;

    if (choice == 1) {
        Triangle triangle; 
        shape = &triangle; 
    } else if (choice == 2) {
        Rectangle rectangle; 
        shape = &rectangle; 
    } else {
        cout << "Invalid choice.\n";
        return 1;
    }

    shape->get_data();
    shape->display_area();

    return 0;
}
