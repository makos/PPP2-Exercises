#include "../std_lib_facilities.h"

double cm_to_m(double cm) {
    return cm/100;
}

double in_to_cm(double in) {
    return in*2.54;
}

double ft_to_in(double ft) {
    return ft*12;
}

double convert_all_to_m(double num, string unit) {
    if (unit == "m")
        return num;
    else if (unit == "cm")
        return cm_to_m(num);
    else if (unit == "ft") {
        double temp = ft_to_in(num);
        temp = in_to_cm(temp);
        return cm_to_m(temp);
    } else if (unit == "in") {
        double temp = in_to_cm(num);
        return cm_to_m(temp);
    }
    return 0;
}

int main() {
    double num = 0;
    double sum = 0;
    double largest = 0;
    double smallest = 0;
    string unit = "";
    vector<double> values;
    
    cout << "Please type in one floating point number with an unit. Type | to quit.\n"
         << "Possible units are: cm, m, in, ft\n";
    while (cin >> num >> unit) {
        if (unit == "m" || unit == "cm" || unit == "in" || unit == "ft") {
            cout << "You entered: " << num << "\n";
        
            if (num < smallest) {
                smallest = num;
            } else if (num > largest) {
                largest = num;
            }

            double temp = convert_all_to_m(num, unit);
            values.push_back(temp);
            sum += temp;
        } else {
            cout << "Please enter a legal unit string.\n";
            continue;            
        }
    }
    cout << "Largest: " << largest << "\n"
         << "Smallest: " << smallest << "\n"
         << "Sum of values: " << sum << "m\n"
         << "Amount of values entered: " << values.size() << "\n"
         << "All input values, converted into meters and sorted:\n";

    sort(values);

    for (int i = 0; i < values.size(); ++i) {
        cout << values[i] << "m ";
    }
    cout << "\n";
    return 0;
}
