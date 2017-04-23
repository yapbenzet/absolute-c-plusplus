#include <iostream>
using namespace std;

int main() {
  int i, j;

  for(i=10; i >= 1; i--) {
    for(j=1; j<=20; j++) {
      cout << i << " x " << j << " = " << i * j << endl;
    }
  }
}
