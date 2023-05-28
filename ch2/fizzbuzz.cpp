#include "../std_lib_facilities.h"

int main() {
    cout << "Provide an integer to test: ";
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << n << " is even\n";
    else
        cout << n << " is odd\n";
    return 0;
}
