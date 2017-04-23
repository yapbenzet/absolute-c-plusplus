#include <iostream>
using namespace std;

void threeDot(int a, int b, int c);

int main() {
  int a, b, c;

  cout << "Three integer, please." << endl;
  cin >> a >> b >> c;

  threeDot(a, b, c);

  return 0;
}

void threeDot(int a, int b, int c){
  cout << a*b*c << endl;
}
