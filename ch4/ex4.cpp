#include "../std_lib_facilities.h"

int main() {
    int n {50};
    int min {0};
    int max {101};
    bool ans_found = false;
    char ans;

    cout << "Think of a number between 1 and 100 inclusive.\nPlease only answer using 'y' or 'n'.\n";

    while (!ans_found) {
        cout << "Is your number " << n << "? ";
        cin >> ans;
        if (ans == 'y') {
            cout << "Found your number! Thanks for playing.\n";
            ans_found = true;
        } else if (ans == 'n') {
            cout << "Is it higher than " << n << "? ";
            cin >> ans;
            if (ans == 'y') {
                min = n;
                n = min + (max - min) / 2;
            }
            else if (ans == 'n') {
                max = n;
                n = min + (max - min) / 2;
            }
        } else if (ans == 'q') {
            ans_found = true;
        } else {
            cout << "Please answer y or n.\n";
        }
    }
    return 0;
}

