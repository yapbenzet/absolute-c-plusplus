#include <iostream>
using namespace std;

int main() {
  int numberArray[10];

  int next, index = 0;
  cout << "Enter up to 10 nonnegative whole numbers" << endl
  << "Place a negative number at the end." << endl;

  cin >> next;
  while((next >= 0) && (index < 10)) {
    numberArray[index] = next;
    index++;

    cin >> next;
  }

  for(int i=0; i<index; i++){
    cout << numberArray[i] << " ";
  }

  cout << endl;
}
