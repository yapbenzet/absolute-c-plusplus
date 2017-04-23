#include <iostream>
using namespace std;

double unitPrice(int diameter, double price);
double unitPrice(int length, int width, double price);

int main() {
  int diameter, length, width;
  double priceRound, unitPriceRound, priceRectangular, unitPriceRectangular;

  cout << "Welcome to the Pizza Consumers Union." << endl
  << "Enter the diameter in inches of a round pizza: ";
  cin >> diameter;

  cout << "Enter the price of a round pizza: $";
  cin >> priceRound;

  cout << "Enter length and width in inches of a rectangular pizza: " << endl;
  cin >> length >> width;

  cout << "Enter the price of a rectangular pizza: $";
  cin >> priceRectangular;

  unitPriceRound = unitPrice(diameter, priceRound);
  unitPriceRectangular = unitPrice(length, width, priceRectangular);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << endl
  << "Round Pizza: Diameter = " << diameter << " inches" << endl
  << "Price = $" << priceRound << " Per square inch = $" << unitPriceRound
  << endl << "Rectangular Pizza: Length = " << length << " inches" << endl
  << "Rectangular Pizza: Width = " << width << " inches" << endl
  << "Price = $" << priceRectangular << " Per square inch = $" << unitPriceRectangular
  << endl;

  if(unitPriceRound < unitPriceRectangular) {
    cout << "The round one is the better buy." << endl;
  }
  else {
    cout << "The rectangular is the better buy." << endl;
  }
  cout << "Buon Appetito!" << endl;
}

double unitPrice(int diameter, double price) {
  const double PI = 3.14159;
  double radius, area;

  radius = diameter / 2.0;
  area = PI * radius * radius;

  return price / area;
}

double unitPrice(int length, int width, double price) {
  double area = length * width;
  return price / area;
}
