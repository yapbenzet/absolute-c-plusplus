#include <iostream>
#include "./employee/titledemployee.h"

using namespace std;

int main() {
  using SavitchEmployees::TitledEmployee;

  TitledEmployee joe("Joe", "Buggy", "123-45-6789", 10500.25);
  joe.printCheck();
}
