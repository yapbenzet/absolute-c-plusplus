#include <string>
#include <cstdlib>
#include <iostream>
#include "employee.h"

using std::string;
using std::cout;
using std::endl;


namespace SavitchEmployees {
  Employee::Employee() : name("No name yet"), ssn("No number yet"), netPay(0) {
    // Blank
  }

  Employee::Employee(const string& theName, const string& theSsn)
  : name(theName), ssn(theSsn), netPay(0) {
    // Blank
  }

  string Employee::getName() const {
    return name;
  }

  string Employee::getSsn() const {
    return ssn;
  }

  double Employee::getNetPay() const {
    return netPay;
  }

  void Employee::setName(const string& newName) {
    name = newName;
  }

  void Employee::setSsn(const string& newSsn) {
    ssn = newSsn;
  }

  void Employee::setNetPay(double newNetPay) {
    netPay = newNetPay;
  }

  void Employee::printCheck() const {
    cout << endl << "Error: printCheck FUNCTION CALLED FOR AN" << endl
    << "UNDIFFERENTIATED EMPLOYEE. Aborting the program." << endl
    << "Check with the author of the program about this bug." << endl;

    exit(1);
  }
}
