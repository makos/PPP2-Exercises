/* Exercise 1, chapter 3 */
#include "../std_lib_facilities.h"

int main() {
  double miles = 0;
  double km = 0;
  cout << "Convert miles to kilometers. How many miles? ";
  cin >> miles;
  cout << miles << " miles is " << miles * 1.609 << " kilometers.\n";
  return 0;
}
