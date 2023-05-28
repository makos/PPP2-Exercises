/* Exercise 4 */
#include "../std_lib_facilities.h"

int main() {
    double val1;
    double val2;
    cout << "Provide two floating-point numbers, with a blank space between them: ";
    cin >> val1 >> val2;
    if (val1 > val2)
        cout << val1 << " is larger than " << val2 << "\n";
    else if (val2 < val1)
        cout << val1 << " is smaller than " << val2 << "\n";
    cout << val1 << "+" << val2 << "=" << val1+val2 << "\n";
    cout << val1 << "-" << val2 << "=" << val1-val2 << "\n";
    cout << val1 << "*" << val2 << "=" << val1*val2 << "\n";
    cout << val1 << "/" << val2 << "=" << val1/val2 << "\n";
}
