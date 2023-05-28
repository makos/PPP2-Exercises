/* Exercise 10 */
#include "../std_lib_facilities.h"

int main() {
    string operation;
    double a;
    double b;
    cout << "Input operation in reverse Polish notation: ";
    cin >> operation >> a >> b;
    if (operation == "+" || operation == "plus")
        cout << a + b << "\n";
    if (operation == "-" || operation == "minus")
        cout << a - b << "\n";
    if (operation == "*" || operation == "mul")
        cout << a * b << "\n";
    if (operation == "/" || operation == "div")
        cout << a / b << "\n";
}
