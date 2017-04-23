#include <iostream>
using namespace std;

int main() {
  int number, sum = 0, count = 0;
  cout << "Enter 4 negative numbers, ONE PER LINE: " << endl;

  while (count < 4) {
    cin >> number;

    if(number >= 0){
      cout << "ERROR: positive number (or zero)!" << endl
      << "Reenter that number and continue: " << endl;
      continue;
    }
    sum += number;
    count++;
  }

  cout << sum << " is the sum of the "
  << count << " numbers." << endl;

  return 0;
}
