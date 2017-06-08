#include <iostream>
#include "./pfarrayd/pfarraydbak.h"

using std::cin;
using std::cout;
using std::endl;

void testPFArrayDBak();

int main() {
    cout << "This program test the class PFArrayDBak" << endl;
    char ans;

    do {
      testPFArrayDBak();
      cout << "Test Again? (y/n) ";
      cin >> ans;
    } while((ans == 'y' || ans=='Y'));

    return 0;
}

void testPFArrayDBak() {
  int cap;
  cout << "Enter capacity of this super array: ";
  cin >> cap;
  PFArrayDBak a(cap);

  cout << "Enter up to " << cap << " nonnegative numbers." << endl;
  cout << "Place a negative number at the end." << endl;

  double next;

  cin >> next;
  while((next >= 0) && (!a.full())) {
    a.addElement(next);
    cin >> next;
  }

  if (next >= 0) {
    cout << "Could not read all numbers." << endl;
    while (next >= 0) {
      cin >> next;
    }
  }

  int count = a.getNumberUsed();
  cout << "The following " << count
  << " numbers read and stored: " << endl;

  int index;
  for(index = 0; index < count; index++) {
    cout << a[index] << " ";
  }
  cout << endl;

  cout << "Backing up array." << endl;
  a.backup();
  cout << "Emptying array." << endl;
  a.emptyArray();

  cout << a.getNumberUsed() << " numbers are now stored in the array." << endl;

  cout << "Restoring array." << endl;
  a.restore();

  count = a.getNumberUsed();
  cout << "The following " << count << " numbers are now stored: " << endl;
  for(index = 0; index < count; index++) {
    cout << a[index] << " ";
  }
  cout << endl;
}
