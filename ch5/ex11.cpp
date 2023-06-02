#include "../std_lib_facilities.h"

int fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

int main() {
    int n {0};
    cout << "How many Fibonacci numbers? ";
    cin >> n;
    try {
        for (int i = 0; i < n; i++) {
            cout << fib(i) << " "; 
        }        
    } catch (exception& e) {
        cerr << e.what() << "\n";
        return 1;
    } catch (...) {
        cerr << "Unknown exception!\n";
        return 2;
    }
    cout << "\n";
    return 0;
}
