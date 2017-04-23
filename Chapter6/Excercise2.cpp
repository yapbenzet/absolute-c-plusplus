#include <iostream>
using namespace std;

struct CourseLevel {
  char level;
  double fee;
};

int main() {
  CourseLevel pg1, ug1;
  pg1.level = 'A';
  pg1.fee = 9.99;

  cout << pg1.level << " $" << pg1.fee << endl;
  ug1 = pg1;

  ug1.fee /= 9;
  cout << ug1.level << " $" << ug1.fee << endl;
}
