#include <iostream>
using namespace std;

class DayOfYear {
public:
  void input();
  void output();
  int month;
  int day;
};

int main() {
  DayOfYear today, birthday;
  cout << "Enter today's date: " << endl;
  today.input();

  cout << "Enter your birthday: " << endl;
  birthday.input();

  cout << "Today's date is ";
  today.output();
  cout << endl;

  cout << "Your birthday is ";
  birthday.output();
  cout << endl;

  if (today.month == birthday.month && today.day == birthday.day) {
    cout << "Happy Birthday!" << endl;
  }
  else {
    cout << "Happy Unbirthday!" << endl;
  }

  return 0;
}

void DayOfYear::output() {
  switch(month) {
    case 1:
    cout << "January "; break;
    case 2:
    cout << "Febuary "; break;
    case 3:
    cout << "March "; break;
    case 4:
    cout << "April "; break;
    case 5:
    cout << "May "; break;
    case 6:
    cout << "June "; break;
    case 7:
    cout << "July "; break;
    case 8:
    cout << "August "; break;
    case 9:
    cout << "September "; break;
    case 10:
    cout << "October "; break;
    case 11:
    cout << "November "; break;
    case 12:
    cout << "December "; break;
    default:
    cout << "ERR ";
  }

  cout << day;
}

void DayOfYear::input() {
  cout << "Enter month as a number: ";
  cin >> month;

  cout << "Enter day as a number: ";
  cin >> day;
}
