#include <iostream>
using std::cout;
using std::endl;

int waitTime = 46;

int main() {
  try {
    cout << "Try block entered." << endl;
    if(waitTime > 30) throw waitTime;
    cout << "Leaving try block." << endl;
  }

  catch (int thrownValue) {
    cout << "Exception thrown with " << endl
    << "waitTime equal to " << thrownValue << endl;
  }

  cout << "After catch block." << endl;

  return 0;
}
