#include "../std_lib_facilities.h"

int main() {
    vector<double> dist;
    cout << "Input distances between cities: ";
    for (double temp; cin >> temp; ) {
        dist.push_back(temp);
    }

    double sum {0};
    double smallest = dist[0];
    double greatest {0};

    for (double d : dist) {
        sum += d;
        if (d < smallest)
            smallest = d;
        if (d > greatest)
            greatest = d;
    }

    cout << "Sum of all distances: " << sum << "\n"
         << "Smallest distance:" << smallest << "\n"
         << "Greatest distance: " << greatest << "\n"
         << "Mean distance: " << sum / dist.size() << "\n";
    return 0;
}
