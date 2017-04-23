#include <iostream>
using namespace std;

void too2(int a[], int howMany) {
  for(int index = 0; index < howMany; index++){
    a[index] = 2;
    cout << a[index] << " "; // Added for checking
  }
  cout << endl;
}

int main() {
  int myArray[29];
  too2(myArray, 29);
  too2(myArray, 10);
  too2(myArray, 55); // Originally Not Allowed

  int yourArray[100];
  too2(yourArray, 100);
  // too2(myArray[3], 29);
}
