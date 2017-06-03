#include <iostream>
using namespace std;

int* doubler(int a[], int size);
int main() {
  int a[] = {1, 2, 3, 4, 5};
  int* b;

  b = doubler(a, 5);

  int i;
  cout << "Array a: " << endl;
  for(i = 0; i < 5; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  for(i = 0; i < 5; i++) {
    cout << b[i] << " ";
  }
  cout << endl;

  delete [] b;
}

int* doubler(int a[], int size) {
  int* temp = new int[size];

  for(int i=0; i<size; i++) {
    temp[i] = a[i] * 2;
  }

  return temp;
}
