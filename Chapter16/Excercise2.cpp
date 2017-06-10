#include <iostream>
using std::cout;
using std::endl;

template <class T>
T absolute(T o1) {
  if (o1 < 0) {
    return -o1;
  }
  return o1;
}

int main() {
  short a = -1;
  int b = 100;
  double c = -5.3;
  
  cout << absolute(a) << endl;
  cout << absolute(b) << endl;
  cout << absolute(c) << endl;
}
