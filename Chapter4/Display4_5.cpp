// 두 가지 크기의 피자 중 어떤 것을 사는 것이 이득인지 결정한다.
#include <iostream>
using namespace std;

void getData(int& smallDiameter, double& priceSmall,
  int& largeDiameter, double& priceLarge);

void giveResults(int smallDiameter, double priceSmall,
  int largeDiameter, double priceLarge);

double unitPrice(int diameter, double price);

int main() {
  int diameterSmall, diameterLarge;
  double priceSmall, priceLarge;

  getData(diameterSmall, priceSmall, diameterLarge, priceLarge);
  giveResults(diameterSmall, priceSmall, diameterLarge, priceLarge);
}

void getData(int& smallDiameter, double& priceSmall,
  int& largeDiameter, double& priceLarge) {
  cout << "Welcome to the Pizza Consumers Union." << endl;
  cout << "Enter diameter of a small pizza (in inches): ";
  cin >> smallDiameter;

  cout << "Enter the price of a small pizza: $";
  cin >> priceSmall;

  cout << "Enter the diameter of a large pizza (in inches): ";
  cin >> largeDiameter;

  cout << "Enter the price of a large pizza: $";
  cin >> priceLarge;
}

void giveResults(int smallDiameter, double priceSmall,
  int largeDiameter, double priceLarge) {
  double unitPriceSmall, unitPriceLarge;

  unitPriceSmall = unitPrice(smallDiameter, priceSmall);
  unitPriceLarge = unitPrice(largeDiameter, priceLarge);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << "Small pizza: " << endl
  << "Diameter = " << smallDiameter << " inches" << endl
  << "Price = $" << priceSmall
  << " Per square inch = $" << unitPriceSmall << endl
  << "Large pizza: " << endl
  << "Diameter = " << largeDiameter << " inches" << endl
  << "Price = $" << priceLarge
  << " Per square inch = $" << unitPriceLarge << endl;

  if (unitPriceSmall > unitPriceLarge) {
    cout << "The large one is the better buy." << endl;
  }
  else {
    cout << "The small one is the better buy." << endl;
  }

  cout << "Buon Appetito!" << endl;
}

double unitPrice(int diameter, double price) {
  const double PI = 3.14159;
  double radius, area;

  radius = diameter / static_cast<double> (2);
  area = PI * radius * radius;

  return price/area;
}
