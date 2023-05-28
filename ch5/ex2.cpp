#include "../std_lib_facilities.h"

class BadTemperature {};

double ctok(double c) {
    if (c < -273.15)
        throw BadTemperature();
    return c + 273.15;
}

int main() {
    double c = 0;
    cin >> c;
    try {
        double k = ctok(c);
        cout << k << "\n";
    } catch (BadTemperature& e) {
        cerr << "Temperature can't be lower than 0K.\n";
        return 1;
    }
    return 0;
}
