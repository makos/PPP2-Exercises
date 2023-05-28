#include "../std_lib_facilities.h"

int main() {
    vector<string> input;
    vector<string> bad_words {"butt", "ass", "dick", "Google"};

    cout << "Write something to be censored:\n";

    for (string temp; cin >> temp; ) {
        for (int i = 0; i < bad_words.size(); ++i) {
            if (temp == bad_words[i])
                temp = "BLEEP";
        }
        input.push_back(temp);
    }

    for (int i = 0; i < input.size(); ++i) {
        cout << input[i] << " ";
    }
    cout << "\n";
    return 0;
}
