#include <iostream>
using namespace std;

class CellPhone {
public:
  void setPrice(double newPrice);
  void setProfit(double newProfit);
  void output();
  double getPrice();
private:
  double price;
  double profit;
  double getProfit();
};

int main() {
  CellPhone nokia, samsung;

  cout << "Samsung: " << endl;
  samsung.output();
  cout << endl;

  cout << "Nokia: " << endl;
  nokia.output();
  cout << endl;

  // private variable: nokia.price = 1299.99;
  samsung.setPrice(2000.97);

  double aPrice, aProfit;
  aPrice = samsung.getPrice();
  // private variable: aProfit = samsung.getProfit();
  // private variable: aProfit = nokia.getProfit();

  nokia = samsung;

  cout << "Samsung: " << endl;
  samsung.output();
  cout << endl;

  cout << "Nokia: " << endl;
  nokia.output();
  cout << endl;
}

void CellPhone::setPrice(double newPrice) {
  price = newPrice;
}

void CellPhone::setProfit(double newProfit) {
  profit = newProfit;
}

double CellPhone::getPrice() {
  return price;
}

void CellPhone::output() {
  // 정보은닉에 문제가 있을 수 있음. For testing!
  cout << "Price: " << price << ", Profit: " << profit;
}

double CellPhone::getProfit() {
  return profit;
}
