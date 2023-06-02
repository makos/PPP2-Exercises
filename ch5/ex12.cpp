#include "../std_lib_facilities.h"

int main() {
    vector<int> ans (4);
    vector<int> inp (4);
    int cows {0};
    int bulls {0};
    int seed {0};

    cout << "Please provide a seed number (any integer): ";
    cin >> seed;
    srand(seed);

    for (int i = 0; i < ans.size(); ++i)
        ans[i] = randint(10);

    try {
        while (cin) {
            cout << "Your guess: ";
            cin >> inp[0] >> inp[1] >> inp[2] >> inp[3];
            for (int i = 0; i < ans.size(); ++i) {
                if (ans[i] == inp[i])
                    bulls++;
                else {
                    for (int x : ans) {
                        if (x == inp[i])
                            cows++;
                    }
                }
            }
            if (bulls == 4) {
                cout << "You guessed right!\n";
                return 0;
            } else {
                cout << "You got " << bulls << " bulls and " << cows << " cows.\n";
                bulls = cows = 0;
            }
        }        
    } catch (exception& e) {
        cerr << e.what() << "\n";
        return 1;
    } catch (...) {
        cerr << "Unknown exception!\n";
        return 2;
    }
    return 0;
}
