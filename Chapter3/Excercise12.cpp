#include <iostream>
using namespace std;

bool AreTheyEqual(int a, int b, int c);

int main() {
  cout << AreTheyEqual(2, 2, 2) << endl;
}

bool AreTheyEqual(int a, int b, int c) {
  if (a == b && b == c) {
    return true;
  }
  return false;
}
