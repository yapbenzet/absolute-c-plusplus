#include <iostream>
using namespace std;

int main() {
  int loopId, temp[10];

  for(loopId=0; loopId<10; loopId++) {
    temp[loopId] = loopId * 3;
  }

  for(loopId=9; loopId>=0; loopId--) {
    cout << temp[loopId] << " ";
  }
  cout << endl;

  for(loopId=0; loopId<10; loopId+=2) {
    cout << temp[loopId] << " ";
  }
  cout << endl;
}
