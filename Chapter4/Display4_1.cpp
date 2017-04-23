// 법률 사무소 청구 프로그램

#include <iostream>
using namespace std;

const double RATE = 150.00; // 비용 per 15분

double fee(int hoursWorked, int minutesWorked);

int main() {
  int hours, minutes;
  double bill;

  cout << "Welcome to the law office of Dewey, Cheatham, and Howe." << endl
  << "The law office with a heart." << endl
  << "Enter the hours and minutes of your consultation." << endl;

  cin >> hours >> minutes;
  bill = fee(hours, minutes);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << "For " << hours << " hours and " << minutes << " minutes, "
  << "your bill is $" << bill << endl;

  return 0;
}

double fee(int hoursWorked, int minutesWorked) {
  int quarterHours;

  minutesWorked += hoursWorked * 60;
  quarterHours = minutesWorked / 15;

  return (quarterHours * RATE);
}
