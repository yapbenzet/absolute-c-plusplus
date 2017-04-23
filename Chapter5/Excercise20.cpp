#include <iostream>
using namespace std;

int main() {
  int myArray[4][4], index1, index2;
  for(index1 = 0; index1 < 4; index1++) {
    for(index2 = 0; index2 < 4; index2++){
      myArray[index1][index2] = index2;
    }
  }

  for(index1 = 0; index1 < 4; index1++) {
    for (index2 = 0; index2 < 4; index2++) {
      cout << myArray[index1][index2] << " ";
    }
    cout << endl;
  }
}
