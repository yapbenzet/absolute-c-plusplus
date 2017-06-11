#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

class DivideByZero {};

double safeDivide(int top, int bottom) throw (DivideByZero);

int main() {
  int numerator;
  int denominator;
  double quotient;

  cout << "Enter numerator: " << endl;
  cin >> numerator;

  cout << "Enter denominator: " << endl;
  cin >> denominator;

  try {
    quotient = safeDivide(numerator, denominator);
  } catch(DivideByZero) {
    cout << "Error: Division by zero!" << endl
    << "Program aborting." << endl;

    exit(0);
  }

  cout << numerator << " / " << denominator <<
  " = " << quotient << endl;

  cout << "End of program." << endl;
  return 0;
}

double safeDivide(int top, int bottom) throw (DivideByZero) {
  if (bottom == 0) throw DivideByZero();
  return top / (double) bottom;
}
