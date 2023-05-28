#include "../std_lib_facilities.h"

double square(double n) {
        return n*n;
}

int main() {
    double a, b, c {0};
    double x1, x2 {0};
    
    cout << "Please input a, b, c constants in that order: ";
    cin >> a >> b >> c;
    cout << "The quadratic equation is: " << a << "x^2 + " << b << "x + " << c << " = 0\n";

    x1 = (-b + sqrt(square(b) - (4 * a * c)))/(2 * a);
    x2 = (-b - sqrt(square(b) - (4 * a * c)))/(2 * a);

    if (!std::isnan(x1) && !std::isnan(x2)) {
        cout << "x1 = " << x1 << "\n"
             << "x2 = " << x2 << "\n";
    } else {
            cout << "No solutions.\n";
    }
    return 0;
}
