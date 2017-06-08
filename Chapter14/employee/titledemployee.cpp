#include <iostream>
#include "titledemployee.h"
#include "salariedemployee.h"
using namespace std;

namespace SavitchEmployees {
    TitledEmployee::TitledEmployee(): SalariedEmployee(), title("No title yet") {
      // Blank
    }

    TitledEmployee::TitledEmployee(string theName, string theTitle, string theSsn, double theSalary)
    : SalariedEmployee(theName, theSsn, theSalary), title(theTitle) {
      setName(theName);
    }

    string TitledEmployee::getTitle() const {
      return title;
    }

    void TitledEmployee::setTitle(string theTitle) {
      title = theTitle;
    }

    void TitledEmployee::setName(string theName) {
      Employee::setName(title + " " + theName);
    }
}
