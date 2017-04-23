#include <iostream>
#include <cmath>

using namespace std;

int _round(double number);

int main() {
  double doubleValue;
  char ans;

  do {
    cout << "Enter a double value: ";
    cin >> doubleValue;

    cout << "Rounded that number is: " << _round(doubleValue) << endl;
    cout << "Again? (y/n): ";
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "End of testing" << endl;

  return 0;
}

int _round(double number) {
  return static_cast<int>(floor(number + 0.5));
}
