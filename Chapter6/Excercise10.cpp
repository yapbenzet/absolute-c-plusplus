#include <iostream>
using namespace std;

class Price {
public:
  void set(double newPrice, char newCurrency);
  void output();
  double UnitPrice;
  char Currency; // 통화의 첫 문자
};

int main() {
  Price p;

  p.set(100, '$');
  p.output();

  p.set(200, '#');
  p.output();
}

void Price::set(double newPrice, char newCurrency) {
  UnitPrice = newPrice;
  Currency = newCurrency;
}

void Price::output() {
  cout << Currency << UnitPrice << endl;
}
