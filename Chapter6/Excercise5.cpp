#include <iostream>
using namespace std;

struct DatetoRemember {
  int month;
  int day;
  int year;
};

void printDate(DatetoRemember d);

int main() {
  DatetoRemember DateOfBirth = { 11, 02 }; // 11 02 0
  DatetoRemember DateOfMarriage = { 32, 56, 11111 }; // 32 56 11111

  //Too many initializers: DatetoRemember DateOfRetirement = { 12, 21, 2014, 15, 1, 2015 };

  printDate(DateOfBirth);
  printDate(DateOfMarriage);
  // printDate(DateOfRetirement);

  return 0;
}

void printDate(DatetoRemember d) {
  cout << d.month << "-" << d.day << "-" << d.year << endl;
}
