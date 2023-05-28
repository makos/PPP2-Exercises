/* Exercise 6 */
#include "../std_lib_facilities.h"

int main() {
    int val1 {0};
    int val2 {0};
    int val3 {0};
    int smallest {0};
    int middle {0};
    int biggest {0};

    cout << "Input three integers separated by whitespace: ";
    cin >> val1 >> val2 >> val3;
    // Find smallest
    if (val1 <= val2 && val1 <= val3) {
        smallest = val1;
        if (val2 < val3) {
            middle = val2;
            biggest = val3;
        } else if (val3 < val2) {
            middle = val3;
            biggest = val2;
        } else {
            middle = biggest = val2 = val3;
        }
    } else if (val2 <= val1 && val2 <= val3) {
        smallest = val2;
        if (val1 < val3) {
            middle = val1;
            biggest = val3;
        } else if (val3 < val1) {
            middle = val3;
            biggest = val1;
        } else {
            middle = biggest = val1 = val3;
        }
    } else if (val3 <= val1 && val3 <= val2) {
        smallest = val3;
        if (val1 < val2) {
            middle = val1;
            biggest = val2;
        } else if (val2 < val1) {
            middle = val2;
            biggest = val1;
        } else {
            middle = biggest = val2 = val1;
        }
    } else {
        smallest = middle = biggest = val1 = val2 = val3;
    }

    cout << smallest << ", " << middle << ", " << biggest << "\n";
}
