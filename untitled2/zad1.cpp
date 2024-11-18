//
// Created by Kiril Valkov on 9.10.24.
//
#include <iostream>
using namespace std;
class Time{
private:
    int hours,  minutes,seconds;
public:
    Time();
    void showTime();
    void showTimePm();
    ~Time();
};

Time::Time() {
        for (;;) {
            cout << "Enter three values of Time:\n";
            cin >> hours >> minutes >> seconds;
            if((hours>=0&& hours<=23)&&(minutes>=0&&minutes<=59)&&(seconds>=0&&seconds<=59)){
                break;
            }
        }
}

Time::~Time() {

}

void Time::showTime() {
    cout <<hours<<":"<<minutes<<":"<<seconds<< "\n";
}

void Time::showTimePm() {
    if ((hours == 12 &&minutes==0 && seconds == 0)||hours<12) {

        cout << hours << ":" << minutes << ":" << seconds << "AM\n";
    } else {
        cout << (hours - 12) << ":" << minutes << ":" << seconds << "PM\n";
    }
}


int main(){
 Time *obj1=new Time();
// Time obj2;
 obj1->showTimePm();
// obj2.showTime();
 delete obj1;

    return 0;
}