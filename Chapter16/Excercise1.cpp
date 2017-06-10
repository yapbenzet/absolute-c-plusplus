#include <iostream>
using std::cout;
using std::endl;

template <class T>
T minimum(T o1, T o2) {
  if (o1 < o2) return o1;
  return o2;
}

int main() {
  int a = 10, b = 11;
  char _a = 'A', _b = 'a';

  cout << minimum(a, b) << endl;
  cout << minimum(_a, _b) << endl;

  return 0;
}
