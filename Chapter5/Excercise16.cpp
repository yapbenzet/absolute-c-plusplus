#include <iostream>
using namespace std;

int outOfOrder(double arr[], int size);

int main() {
  double a[10] = { 1.2, 2.1, 3.3, 2.5, 4.5, 7.9, 5.4, 8.7, 9.9, 1.0 };

  cout << outOfOrder(a, 10) << endl;
}

int outOfOrder(double arr[], int size) {
  for(int i=0; i<size-1; i++) {
    if (arr[i] > arr[i+1]) {
      return i+1;
    }
  }
  return -1;
}
