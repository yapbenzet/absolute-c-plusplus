#include <iostream>
using namespace std;

int main() {
  double number = 1.312;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(3);

  cout << number << endl;
}
