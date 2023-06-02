#include "../std_lib_facilities.h"

class Name_value {
    public:
        string name;
        int value;
};

int main() {
    vector<Name_value> name_values;
    string name;
    int score;
    bool run = true;

    while (cin) {
        cin >> name >> score;
        for (int i = 0; i < name_values.size(); ++i) {
            if (name == name_values[i].name) {
                cerr << "Name " << name << " entered twice.\n";
                return 1;
            }
        }
        if (name == "NoName" && score == 0) {
            break;
        }
        name_values.push_back({name, score});
    }
    for (int i = 0; i < name_values.size(); ++i) {
        cout << name_values[i].name << " " << name_values[i].value << "\n";
    }
    return 0;
}
