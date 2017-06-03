#include <iostream>
using namespace std;

int main() {
  int number;
  int* arrayPtr;
  arrayPtr = new int[10];

  cout << "Give me 10 even numbers under 500:" << endl;

  for(int i=0; i<10;) {
    cin >> number;

    if((number % 2 == 0) && number < 500) {
      arrayPtr[i] = number;
      i++;
    } else {
      cout << "Invalid number." << endl;
    }
  }

  for(int i=0; i<10; i++) {
    cout << arrayPtr[i] << " ";
  }
  cout << endl;
}
