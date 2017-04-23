#include <iostream>
using namespace std;

int main() {
  int a = 100;
  while (a) {
    cout << a << " ";
    a -= 10;
  }

  cout << endl;
}
