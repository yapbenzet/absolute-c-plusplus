#include <iostream>
using std::cout;
using std::endl;

void sampleFunction(double test) throw (int);

int main() {
  try {
    cout << "Trying." << endl;
    sampleFunction(98.6);
    cout << "Trying after call." << endl;
  }
  catch(int) {
    cout << "Catching" << endl;
  }

  cout << "End of program." << endl;
  return 0;
}

void sampleFunction(double test) throw (int) {
  cout << "Starting sampleFunction." << endl;
  if (test < 100) throw 42;
}
