#include "../std_lib_facilities.h"

class BadTemperature {};

double ctok(double c) {
    if (c < -273.15)
        throw BadTemperature();
    return c + 273.15;
}

double ktoc(double k) {
    if (k < 0)
        throw BadTemperature();
    return k - 273.15;
}

int main() {
    double inp = 0;
    char unit {'c'};
    cout << "Enter temperature to convert (please add C or K): ";
    cin >> inp >> unit;;
    try {
        double k {0};
        double c {0};
        switch (unit) {
        case 'c': case 'C':
            k = ctok(inp);
            cout << k << "K\n";
            break;
        case 'k': case 'K':
            c = ktoc(inp);
            cout << c << "C\n";
            break;
        default:
            cout << "Please specify either (C)elsius or (K)elvin.\n";
            break;
        }
    } catch (BadTemperature& e) {
        cerr << "Temperature can't be lower than 0K.\n";
        return 1;
    }
    return 0;
}
