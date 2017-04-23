#include <iostream>
using namespace std;

int main() {
  int number, sum = 0, count = 0;
  cout << "Enter 4 negative numbers: " << endl;

  while (++count <= 4) {
    cin >> number;

    if (number >= 0){
      cout << "ERROR: positive number or zero was entered as the "
      << endl << count << "th number! Input ends with the " << count << "th number."
      << endl << count << "th number was not added in." << endl;

      break;
    }

    sum += number;
  }

  cout << sum << " is the sum of the first " << (count - 1) << " numbers" << endl;
  return 0;
}
