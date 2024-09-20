#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int hours, int minutes, int seconds) {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }

    Time operator + (Time t) {
                Time result;
        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes + (result.seconds / 60); // Adding extra minutes from seconds
        result.seconds %= 60; // Converting seconds to a valid range

        result.hours = hours + t.hours + (result.minutes / 60); // Adding extra hours from minutes
        result.minutes %= 60; // Converting minutes to a valid range

        return result;
    }

    void display() {
        cout << hours << ":" << minutes << ":" << seconds << ":" << endl;
    }

};

int main() {
    Time t1(13, 43, 62);
    Time t2(11, 42, 63);
    Time t3;

    t3 = t1+t2 ;

     cout << "Result of addition: ";
    t3.display();

    return 0;
}
