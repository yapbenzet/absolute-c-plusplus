#include <iostream>
using namespace std;

int main() {
  int temperature = 30, pressure = 100;

  if((temperature >= 100) || (pressure >= 200)) {
    cout << "Warning" << endl;
  }
  else {
    cout << "OK" << endl;
  }
}
