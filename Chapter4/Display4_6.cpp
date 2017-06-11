#include <iostream>
using namespace std;

double ave(double n1, double n2);
double ave(double n1, double n2, double n3);

int main() {
  cout << "The average of 2.0, 2.5, and 3.0 is "
  << ave(2.0, 2.5, 3.0) << endl;

  cout << "The average of 4.5 and 5.5 is "
  << ave(4.5, 5.5) << endl;

  return 0;
}

double ave(double n1, double n2) {
  return ((n1 + n2) / 2.0);
}

double ave(double n1, double n2, double n3) {
  return ((n1 + n2 + n3) / 3.0);
}
