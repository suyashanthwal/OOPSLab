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

    void add(Time t3 , Time t1, Time t2) {
        t3.seconds = t1.seconds + t2.seconds;
        t3.minutes = t1.minutes + t2.minutes + (t3.seconds / 60);
        t3.hours = t1.hours + t2.hours + (t3.minutes / 60);
        t3.minutes = t3.minutes % 60;
        t3.seconds = t3.seconds % 60;

        cout << t3.hours << ":" << t3.minutes << ":" << t3.seconds << endl;
    }
};

int main() {
    Time t1(1, 50, 50);
    Time t2(12, 30, 150);
    Time t3;

    t3.add(t3,t1, t2);
    return 0;
}
