#include <string>
#include <iostream>
#include "hourlyemployee.h"

using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees {
  HourlyEmployee::HourlyEmployee(): Employee(), wageRate(0), hours(0) {
    // Blank
  }

  HourlyEmployee::HourlyEmployee(const string& theName, const string& theSsn, double theWageRate, double theHours)
  : Employee(theName, theSsn), wageRate(theWageRate), hours(theHours) {
    // Blank
  }

  double HourlyEmployee::getRate() const {
    return wageRate;
  }

  double HourlyEmployee::getHours() const {
    return hours;
  }

  void HourlyEmployee::setRate(double newWageRate) {
    wageRate = newWageRate;
  }

  void HourlyEmployee::setHours(double hoursWorked) {
    hours = hoursWorked;
  }

  void HourlyEmployee::printCheck() {
    setNetPay(hours * wageRate);

    cout << endl << "______________________________" << endl
    << "Pay to the order of " << getName() << endl
    << "The sum of " << getNetPay() << " Dollars" << endl
    << "______________________________" << endl
    << "Check Stub: NOT NEOGITABLE" << endl
    << "Employee Number: " << getSsn() << endl
    << "Hourly Employee." << endl << "Hours worked" << hours
    << " Rate: " << wageRate << "Pay: " << getNetPay() << endl
    << "______________________________" << endl;
  }
}
