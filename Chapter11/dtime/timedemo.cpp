#include <iostream>
#include "dtime.h"

void readHour(int& theHour);

int main() {
  using DTimeSavitch::DigitalTime;
  using std::cout;
  using std::cin;
  using std::endl;

  int theHour;
  readHour(theHour);

  DigitalTime clock(theHour, 0), oldClock;

  oldClock = clock;
  clock.advance(15);

  if(clock == oldClock) {
    cout << "Something is wrong." << endl;
  }

  cout << "You entered " << oldClock << endl;
  cout << "15 minutes later the time will be " << clock << endl;

  clock.advance(2, 15);
  cout << "2 hours and 15 minutes after that " << endl
  << "the time will be " << clock << endl;

  return 0;
}

void readHour(int &theHour) {
  using std::cout;
  using std::cin;
  using std::endl;

  cout << "Let's play a time game." << endl
  << "Let's pretend the hour has just changed." << endl
  << "You may write midnight as a either 0 or 24," << endl
  << "but, I will always write it as 0." << endl
  << "Enter the hour as a number (0 to 24): ";

  cin >> theHour;
}
