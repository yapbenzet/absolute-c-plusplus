#include <iostream>
#include <string>
#include "salariedemployee.h"

using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees {
  SalariedEmployee::SalariedEmployee(): Employee(), salary(0) {
    // Blank
  }

  SalariedEmployee::SalariedEmployee(const string& theName, const string& theNumber,
  double theWeeklyPay) : Employee(theName, theNumber), salary(theWeeklyPay) {
    // Blank
  }

  double SalariedEmployee::getSalary() const {
    return salary;
  }

  void SalariedEmployee::setSalary(double newSalary) {
    salary = newSalary;
  }

  void SalariedEmployee::printCheck() {
    setNetPay(salary);
    cout << endl << "______________________________" << endl
    << "Pay to the order of " << getName() << endl
    << "The sum of " << getNetPay() << " Dollars" << endl
    << "______________________________" << endl
    << "Check Stub: NOT NEOGITABLE" << endl
    << "Employee Number: " << getSsn() << endl
    << "Salaried Employee. Regular Pay:" << salary << endl
    << "______________________________" << endl;
  }
}
