#ifndef TITLEDEMPLOYEE_H
#define TITLEDEMPLOYEE_H

#include <iostream>
#include "salariedemployee.h"
using namespace std;

namespace SavitchEmployees {
  class TitledEmployee: public SalariedEmployee {
  public:
    TitledEmployee();
    TitledEmployee(string theName, string theTitle, string theSsn, double theSalary);

    string getTitle() const;

    void setTitle(string theTitle);
    void setName(string theName);
  private:
    string title;
  };
}

#endif
