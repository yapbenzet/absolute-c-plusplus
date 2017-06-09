#include <iostream>
#include <cstdlib>
#include "sale.h"

using std::cout;
using std::endl;

namespace SavitchSale {
  Sale::Sale() : price(0) {
    // Blank
  }

  Sale::Sale(double thePrice) {
    if (thePrice >= 0) price = thePrice;
    else {
      cout << "Error: Cannot have a negative price!" << endl;
      exit(1);
    }
  }

  double Sale::bill() const {
    return price;
  }

  double Sale::getPrice() const {
    return price;
  }

  void Sale::setPrice(double newPrice) {
    if (newPrice >= 0) price = newPrice;
    else {
      cout << "Error: Cannot have a negative price!" << endl;
      exit(1);
    }
  }

  double Sale::savings(const Sale& other) const {
    return (bill() - other.bill());
  }

  bool operator < (const Sale& first, const Sale& second) {
    return (first.bill() < second.bill());
  }
}
