#include "../std_lib_facilities.h"

int main() {
    constexpr double yen_in_usd = 0.007162;
    constexpr double eur_in_usd = 1.07430;
    constexpr double gpb_in_usd = 1.2345;
    
    cout << "Amount of currency (y, e or p) to be converted into USD: ";
    double amt;
    string unit;
    cin >> amt >> unit;
    if (unit == "y")
        cout << amt << " YEN = $" << amt * yen_in_usd << "\n";
    else if (unit == "e")
        cout << amt << " EUR = $" << amt * eur_in_usd << "\n";
    else if (unit == "p")
        cout << amt << " GBP = $" << amt * gpb_in_usd << "\n";
    else
        cout << "Unknown unit\n";
    return 0;
}
