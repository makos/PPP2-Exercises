#include "../std_lib_facilities.h"

int main() {
    constexpr double yen_in_usd = 0.007162;
    constexpr double eur_in_usd = 1.07430;
    constexpr double gpb_in_usd = 1.2345;
    
    cout << "Amount of currency (y, e or p) to be converted into USD: ";
    double amt;
    char unit;
    cin >> amt >> unit;

    switch (unit) {
    case 'y':
        cout << amt << " YEN = $" << amt * yen_in_usd << "\n";
        break;
    case 'e':
        cout << amt << " EUR = $" << amt * eur_in_usd << "\n";
        break;
    case 'p':
        cout << amt << " GBP = $" << amt * gpb_in_usd << "\n";
        break;
    default:
        cout << "Unknown unit\n";
        break;
    }
    return 0;
}
