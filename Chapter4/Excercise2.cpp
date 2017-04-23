#include <iostream>
using namespace std;

double totalInches(int feet, int inches);

int main() {
  cout << totalInches(1, 2) << endl;
}

double totalInches(int feet, int inches) {
  return ( 12 * feet + inches );
}
