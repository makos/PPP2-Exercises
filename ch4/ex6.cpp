#include "../std_lib_facilities.h"

int main() {
    vector<string> s_digits {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> n_digits {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
    string n;
    bool match = false;
    
    cout << "Input a number between 0 and 9: ";
    
    while (cin >> n) {
        match = false;
        for (int i = 0; i < s_digits.size(); ++i) {
            if (s_digits[i] == n) {
                cout << n_digits[i] << "\n";
                match = true;
            } else if (n_digits[i] == n) {
                cout << s_digits[i] << "\n";
                match = true;
            }
        }
        if (!match)
            cout << "Please enter only single digits.\n";
    }
    return 0;
}
