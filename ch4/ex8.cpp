#include "../std_lib_facilities.h"

double power(int n, int p) {
    double result = n;
    for (; p > 0; --p) {
        result *= n;
    }
    return result;
}

int main() {
    vector<double> squares (64);

    for (int i = 0; i < squares.size(); ++i) {
        squares[i] = power(2, i); 
        cout << "Square #" << i+1 << ": " << squares[i] << " grains of rice.\n";
        if (i > 0) {
            if (squares[i-1] < 1000 && squares[i] > 1000)
                cout << "You need " << i+1 << " squares to get at least 1000 grains.\n";
            else if (squares[i-1] < 1000000 && squares[i] > 1000000)
                cout << "You need " << i+1 << " squares to get at least 1,000,000 grains.\n";
            else if (squares[i-1] < 1000000000 && squares[i] > 1000000000)
                cout << "You need " << i+1 << " squares to get at least 1,000,000,000 grains.\n";
        }
    }
}
