#include <iostream>
using namespace std;

void figureMeOut(int& x, int y, int& z);

int main() {
  int a, b, c;
  a = 10; b = 20; c = 30;

  figureMeOut(a, b, c);
  cout << a << " " << b << " " << c << " " << endl; // 1 20 1

  return 0;
}

void figureMeOut(int& x, int y, int& z) {
  cout << x << " " << y << " " << z << endl; // 10 20 30
  x = y = z = 1; // Right to Left
  cout << x << " " << y << " " << z << endl; // 1 1 1
}
