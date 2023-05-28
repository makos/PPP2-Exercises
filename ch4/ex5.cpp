#include "../std_lib_facilities.h"

int main() {
    double a, b {0};
    char oper;

    cout << "Simple calculator.\n> ";
    while (cin >> a >> b >> oper) {
        if (oper == '+')
            cout << "The sum of " << a << " and " << b << " is " << a + b << ".\n";
        else if (oper == '-')
            cout << "The difference of " << a << " and " << b << " is " << a - b << ".\n";
        else if (oper == '*')
            cout << "The product of " << a << " and " << b << " is " << a * b << ".\n";
        else if (oper == '/')
            cout << "The ratio of " << a << " and " << b << " is " << a / b << ".\n";
        else
            cout << "Unknown operator.\n";
        cout << "> ";
    }
    return 0;
}
