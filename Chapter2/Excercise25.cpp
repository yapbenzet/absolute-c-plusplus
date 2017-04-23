#include <iostream>
using namespace std;

int main() {
  int x = -42;
  do {
    cout << x << endl;
    x = x - 3;
  } while (x > 0);
}
