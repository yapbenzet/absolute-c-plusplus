#include <iostream>
using namespace std;

int main() {
  int *p1 = new int, *p2 = new int;
  *p1 = 111;
  *p2 = 222;
  cout << *p1 << " " << *p2 << endl;

  *p1 = *p2 = 1234;
  cout << *p1 << " " << *p2 << endl;

  p1 = p2;
  cout << *p1 << " " << *p2 << endl;

  p2++;
  (*p1)++;
  cout << *p1 << " " << *p2 << endl;
}
