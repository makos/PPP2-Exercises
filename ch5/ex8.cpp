#include "../std_lib_facilities.h"

int main() {
    int n;
    vector<double> doubles;
    vector<double> differences;
    double sum {0};

    cout << "Please enter the number of values you want to sum: (N)";
    cin >> n;
    cout << "Please enter some doubles (any non-number character will terminate):\n";
    try {
        for (double x; cin >> x;) {
            doubles.push_back(x);
        }
        if (n >= doubles.size())
            error("You requested more numbers than provided.\n");

        if (doubles.size() > 1) {
            for (int i = 1; i < n; ++i) {
                differences.push_back(doubles[i] - doubles[i-1]);
            }
        }
        
        for (int i = 0; i < n; ++i) {
            sum += doubles[i];
        }
        cout << "The sum of the first " << n << " numbers ( ";
        for (int i = 0; i < n; ++i)
            cout << doubles[i] << " ";
        cout << ") is " << sum << "\n";
        cout << "The N-1 (" << n-1 << ") differences are ";
        for (int i = 0; i < n-1; ++i) {
            cout << differences[i] << " ";
        }
        cout << "\n";
    } catch (exception& e) {
        cerr << e.what() << "\n";
        return 1;
    } catch (...) {
        cerr << "Unknown exception!\n";
        return 2;
    }
    return 0;
}
