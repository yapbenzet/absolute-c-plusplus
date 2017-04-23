#include <iostream>
using namespace std;

int main() {
  int n = 120;

  if (n < 0) {
    cout << "n is under 0.";
  }
  else if (n >= 0 && n <= 100) {
    cout << "n is positive(or 0) and is under not bigger than 100.";
  }
  else {
    cout << "n is bigger than 100.";
  }

  cout << endl;
}
