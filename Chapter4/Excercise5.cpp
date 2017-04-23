#include <iostream>
using namespace std;

void BothValue(int a, int b);

int main() {
  int a, b;
  a = 10; b = 3;

  BothValue(a, b);

  cout << a << " " << b << endl;
}

void BothValue(int a, int b) {
  a = b = 0;
}
