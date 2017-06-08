#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <string>
#include "employee.h"

using std::string;

namespace SavitchEmployees {
  class HourlyEmployee: public Employee {
  public:
    HourlyEmployee();
    HourlyEmployee(const string& theName, const string& theSsn, double theWageRate, double theHours);

    double getRate() const;
    double getHours() const;

    void setRate(double newWageRate);
    void setHours(double hoursWorked);
    void printCheck();
  private:
    double wageRate;
    double hours;
  };
}

#endif
