#include <iostream>
using namespace std;

void iceCreamDivision(int number, double totalWeight);

int main() {
  int number;
  double totalWeight;

  cout << "Enter the number of customers: ";
  cin >> number;

  cout << "Enter weight of ice create to divide (in onces): ";
  cin >> totalWeight;

  iceCreamDivision(number, totalWeight);

  return 0;
}

void iceCreamDivision(int number, double totalWeight) {
  double portion;

  if (number == 0) {
    cout << "Can not divide among zero customers." << endl;
    return;
  }

  portion = totalWeight / number;
  cout << "Each one receives " << portion << " ounces of ice creame." << endl;
}
