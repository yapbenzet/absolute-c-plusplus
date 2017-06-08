#include <iostream>
#include "./employee/hourlyemployee.h"
#include "./employee/salariedemployee.h"
#include "./employee/employee.h"
using namespace std;

using SavitchEmployees::Employee;
using SavitchEmployees::HourlyEmployee;
using SavitchEmployees::SalariedEmployee;

void showEmployeeData(const Employee& object);

int main() {

  HourlyEmployee joe("Mighty Joe", "123-45-6789", 20.50, 40);
  SalariedEmployee boss("Mr.Big Shot", "987-65-4321", 10500.50);

  showEmployeeData(joe);
  showEmployeeData(boss);

  return 0;
}

void showEmployeeData(const Employee& object) {
  cout << "Name: " << object.getName() << endl
  << "Social Security Number: " << object.getSsn() << endl;
}
