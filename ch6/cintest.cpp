#include "../std_lib_facilities.h"

int main() {
    double val {0};
    char ch {0};

    cout << "> ";
    cin >> ch;
    cin.putback(ch);
    cin >> val;
    cout << "ch: " << ch << "\nval: " << val << "\n";
    return 0;
}
