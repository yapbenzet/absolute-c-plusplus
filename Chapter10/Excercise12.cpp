#include <iostream>
using namespace std;

int main() {
  int IntArray[10];
  int arraySize = 10;
  int *IntPtr = IntArray;

  for(int i=arraySize-1; i >= 0; i--) {
    IntPtr[i] = i;
  }

  for(int i=0; i<arraySize; i++) {
    cout << IntPtr[i] << " ";
  }

  cout << endl;
}
