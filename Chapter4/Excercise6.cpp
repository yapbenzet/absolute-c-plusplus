#include <iostream>
using namespace std;

void deductDiscount(double discountRate, double& cost);

int main() {
  double rate, cost;
  cout << "Discount rate and cost, please." << endl;
  cin >> rate >> cost;

  deductDiscount(rate, cost);

  cout << "The discounted cost is " << cost << endl;
}

void deductDiscount(double discountRate, double& cost) {
  cost -= cost * discountRate / 100;
}
