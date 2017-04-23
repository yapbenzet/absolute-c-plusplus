#include <iostream>
using namespace std;

void fillUp(int a[], int size);

int main() {
  const int ARR_SIZE = 10;
  int a[ARR_SIZE];

  fillUp(a, ARR_SIZE);
}

void fillUp(int a[], int size) {
  cout << "Enter " << size << " numbers" << endl;

  for(int i=0; i<size; i++) {
    cin >> a[i];
  }

  cout << "The last array index used is " << (size -1) << endl;
}
