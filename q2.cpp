#include <iostream>
using namespace std;

class WeekDays {
private:
    string Days[7];
    int CurrentDay;

public:
    // Default Constructor
    WeekDays() {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = 0; // Default: Sunday
    }

    // Parameterized Constructor
    WeekDays(int day) {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";

        CurrentDay = day % 7; // keeps it in range 0–6
    }

    // Get current day
    string getCurrentDay() {
        return Days[CurrentDay];
    }

    // Get next day
    string getNextDay() {
        return Days[(CurrentDay + 1) % 7];
    }

    // Get previous day
    string getPreviousDay() {
        return Days[(CurrentDay - 1 + 7) % 7];
    }

    // Get Nth day from today
    string getNthDayFromToday(int n) {
        return Days[(CurrentDay + n) % 7];
    }
};

int main() {
    // Default constructor
    WeekDays w1;
    cout << "Default Current Day: " << w1.getCurrentDay() << endl;
    cout << "Next Day: " << w1.getNextDay() << endl;
    cout << "Previous Day: " << w1.getPreviousDay() << endl;
    cout << "20 days from now: " << w1.getNthDayFromToday(20) << endl;

    // Parameterized constructor
    WeekDays w2(8); // 8 % 7 = 1 → Monday
    cout << "Current Day (input 8): " << w2.getCurrentDay() << endl;
    cout << "Next Day: " << w2.getNextDay() << endl;
    cout << "Previous Day: " << w2.getPreviousDay() << endl;
    cout << "15 days from now: " << w2.getNthDayFromToday(15) << endl;

    return 0;
}
