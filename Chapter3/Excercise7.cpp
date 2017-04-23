#include <iostream>
using namespace std;

char Compare(int, int);

int main() {
  int Fn = -10999, Sn = 5;
  cout << Fn << Compare (Fn, Sn) << Sn << endl;

  return 0;
}

char Compare(int firstNumber, int secondNumber) {
  if (firstNumber == secondNumber) {
    return '=';
  }
  else if (firstNumber > secondNumber) {
    return '>';
  }
  else {
    return '<';
  }
}
