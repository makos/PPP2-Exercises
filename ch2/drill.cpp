#include "../std_lib_facilities.h"

int main() {
    string first_name = " ";
    cout << "Enter the name of the person you want to write to: ";
    cin >> first_name;
    cout << "Dear " << first_name << ",\n"
         << "    How are you? I am fine. I miss you.\n"
         << "I am learning C++ right now. I'm writing this letter"
         << " through a program I made.\n";
    cout << "Enter the name of your friend: ";
    string friend_name = " ";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";
    cout << "Is your friend male (type 'm') or female ('f')? ";
    char friend_sex = 0;
    cin >> friend_sex;
    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    cout << "How old is the recipient? ";
    int age = -1;
    cin >> age;
    if (age <= 0 || age >= 110)
        simple_error("you're kidding!");
    cout << "I hear you just had a birthday and you are " << age << " years old!\n";
    if (age < 12)
        cout << "Next year you will be " << age + 1 << "!\n";
    if (age == 17)
        cout << "Next year you will be able to vote!\n";
    if (age > 70)
        cout << "I hope you are enjoying retirement.\n";
    cout << "Yours sincerely,\n\n\nMateusz\n";
    return 0;
}
