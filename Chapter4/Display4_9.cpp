#include <iostream>
using namespace std;

double unitPrice(int diameter, double price);

// Driver Program
int main() {
  double diameter, price;
  char ans;

  do {
    cout << "Enter diameter and price: " << endl;
    cin >> diameter >> price;

    cout << "unit price is $" << unitPrice(diameter, price) << endl;

    cout << "Test again? (y/n) ";
    cin >> ans;
  } while(ans == 'y' || ans == 'Y');

  return 0;
}

double unitPrice(int diameter, double price) {
  const double PI = 3.14159;
  double radius, area;

  radius = diameter / 2.0;
  area = PI * radius * radius;

  return price / area;
}

/* Stub
double unitPrice(int diameter, double price) {
  return (0.99);
}
*/
