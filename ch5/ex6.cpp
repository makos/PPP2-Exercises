#include "../std_lib_facilities.h"

double ctof(double c) {
    return (9.0/5.0) * c + 32;
}

int main() {
    double c {0};
    double f {0};
    cout << "Temperature in Celsius: ";
    cin >> c;
    f = ctof(c);
    cout << f << "F\n";
    return 0;
}
