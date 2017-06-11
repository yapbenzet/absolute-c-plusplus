#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int donuts, milk;
  double dpg;

  cout << "Enter number of donuts: " << endl;
  cin >> donuts;

  cout << "Enter number of glasses of milk: " << endl;
  cin >> milk;

  if (milk <= 0) {
    cout << donuts << " donuts, and No milk!" << endl
    << "Go buy some milk." << endl;
  }
  else {
    dpg = donuts / (double) milk;
    cout << donuts << " donuts." << endl
    << milk << " glasses of milk." << endl
    << "You have " << dpg << " donuts for each glass of milk." << endl;
  }

  cout << "End of program." << endl;
  return 0;
}
