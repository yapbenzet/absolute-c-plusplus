#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

#include "./pfarray/pfarray.cpp"
#include "./pfarray/pfarraybak.h"
#include "./pfarray/pfarraybak.cpp"

using PFArraySavitch::PFArrayBak;

int main() {
  int cap;
  cout << "Enter the capacity of this super array: ";
  cin >> cap;

  PFArrayBak<string> a(cap);

  cout << "Enter " << cap << " strings." << endl
  << "seperated by blanks." << endl;

  string next;
  for(int i=0; i<cap; i++) {
    cin >> next;
    a.addElement(next);
  }

  int count = a.getNumberUsed();
  cout << "The following " << count << " strings read and stored: " << endl;

  int index;
  for(index = 0; index < count; index++) cout << a[index] << " ";
  cout << endl;

  cout << "Backing up array." << endl;
  a.backup();

  cout << "Emptying array." << endl;
  a.emptyArray();

  cout << a.getNumberUsed() << " strings are now stored in the array." << endl;
  cout << "Restoring array." << endl;
  a.restore();

  count = a.getNumberUsed();
  cout << "The following " << count << " strings are now stored: " << endl;
  for (index = 0; index < count; index++) cout << a[index] << " ";
  cout << endl;

  cout << "End of demonstration." << endl;

  return 0;
}
