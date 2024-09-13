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

    void add(Time t1, Time t2) {
        this->seconds = t1.seconds + t2.seconds;
        this->minutes = t1.minutes + t2.minutes + (this->seconds / 60);
        this->hours = t1.hours + t2.hours + (this->minutes / 60);
        this->minutes = this->minutes % 60;
        this->seconds = this->seconds % 60;

        cout << this->hours << ":" << this->minutes << ":" << this->seconds << endl;
    }
};

int main() {
    Time t1(13, 43, 62);
    Time t2(11, 42, 63);
    Time t3;

    t3.add(t1, t2);
    return 0;
}
