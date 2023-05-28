#include "../std_lib_facilities.h"

int square(int n) {
    int temp {0};
    for (int i = 0; i < n; ++i) {
        temp += n;
    }
    return temp;
}

int main() {
    int n;
    cout << "Input number to square: ";
    cin >> n;
    cout << square(n) << "\n";
    return 0;
}
