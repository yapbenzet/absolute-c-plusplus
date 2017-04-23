#include <iostream>
using namespace std;

int main() {
  double savings = 5, expenses = 10;

  if (savings >= expenses) {
    savings -= expenses;
    expenses = 0;
  }
  else {
    cout << "Bankrupt" << endl;
  }
}
