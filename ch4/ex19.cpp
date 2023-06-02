#include "../std_lib_facilities.h"

int main() {
    vector<string> names;
    vector<int> scores;
    string name;
    int score;
    bool run = true;

    while (cin && run) {
        cin >> name >> score;
        for (int i = 0; i < names.size(); ++i) {
            if (name == names[i]) {
                cerr << "Name " << name << " entered twice.\n";
                return 1;
            }
        }
        if (name == "NoName" && score == 0) {
            run = false;
                break;
            }
        names.push_back(name);
        scores.push_back(score);
    }
    for (int i = 0; i < names.size(); ++i) {
        cout << names[i] << " " << scores[i] << "\n";
    }
    return 0;
}
