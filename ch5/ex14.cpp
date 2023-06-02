#include "../std_lib_facilities.h"

int sumof(vector<int> v) {
    int temp;
    for (int x : v)
        temp += x;
    return temp;
}

int main() {
    vector<int> mon, tue, wed, thu, fri, sat, sun;
    string day {""};
    int score {0};
    int bad_days {0};
    
    while (cin) {
        cin >> day >> score;

        if (day == "Monday" || day == "mon" || day == "monday")
            mon.push_back(score);
        else if (day == "Tuesday" || day == "tue" || day == "tuesday")
            tue.push_back(score);
        else if (day == "Wednesday" || day == "wed" || day == "wednesday")
            wed.push_back(score);
        else if (day == "Thursday" || day == "thu" || day == "thursday")
            thu.push_back(score);
        else if (day == "Friday" || day == "fri" || day == "friday")
            fri.push_back(score);
        else if (day == "Saturday" || day == "sat" || day == "saturday")
            sat.push_back(score);
        else if (day == "Sunday" || day == "sun" || day == "sunday")
            sun.push_back(score);
        else
            bad_days++;
    }
    cout << "\nMonday: ";
    for (int i = 0; i < mon.size(); ++i)
        cout << mon[i] << " ";
    cout << " = " << sumof(mon);
    
    cout << "\nTuesday: ";
    for (int i = 0; i < tue.size(); ++i)
        cout << tue[i] << " ";
    cout << " = " << sumof(tue);
    
    cout << "\nWednesday: ";
    for (int i = 0; i < wed.size(); ++i)
        cout << wed[i] << " ";
    cout << " = " << sumof(wed);
    
    cout << "\nThursday: ";
    for (int i = 0; i < thu.size(); ++i)
        cout << thu[i] << " ";
    cout << " = " << sumof(thu);
    
    cout << "\nFriday: ";
    for (int i = 0; i < fri.size(); ++i)
        cout << fri[i] << " ";
    cout << " = " << sumof(fri);
    
    cout << "\nSaturday: ";
    for (int i = 0; i < sat.size(); ++i)
        cout << sat[i] << " ";
    cout << " = " << sumof(sat);
    
    cout << "\nSunday: ";
    for (int i = 0; i < sun.size(); ++i)
        cout << sun[i] << " ";
    cout << " = " << sumof(sun);
    
    cout << "\nBad inputs: " << bad_days << "\n";
    return 0;
}
