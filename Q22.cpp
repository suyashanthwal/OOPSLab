#include <iostream>
using namespace std;

class CAL_AREA {
protected:
    float r; 
    float h;

public:
    void getdata() {
        cout << "Enter the radius (r): ";
        cin >> r;
        cout << "Enter the height (h): ";
        cin >> h;
    }

    virtual void display_volume() = 0;
};

class Cone : public CAL_AREA {
public:
    void display_volume() override {
        float volume = (1.0 / 3.0) * 3.14159 * r * r * h;
        cout << "Volume of the cone: " << volume << endl;
    }
};

class Hemisphere : public CAL_AREA {
public:
    void display_volume() override {
        float volume = (2.0 / 3.0) * 3.14159 * r * r * r;
        cout << "Volume of the hemisphere: " << volume << endl;
    }
};

class Cylinder : public CAL_AREA {
public:
    void display_volume() override {
        float volume = 3.14159 * r * r * h;
        cout << "Volume of the cylinder: " << volume << endl;
    }
};

int main() {
    int choice;
    cout << "Choose the shape to calculate the volume:\n";
    cout << "1. Cone\n";
    cout << "2. Hemisphere\n";
    cout << "3. Cylinder\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    CAL_AREA* shape;

    if (choice == 1) {
        Cone cone;
        shape = &cone;
    } else if (choice == 2) {
        Hemisphere hemisphere;
        shape = &hemisphere;
    } else if (choice == 3) {
        Cylinder cylinder;
        shape = &cylinder;
    } else {
        cout << "Invalid choice.\n";
        return 1;
    }

    shape->getdata();
    shape->display_volume();

    return 0;
}
