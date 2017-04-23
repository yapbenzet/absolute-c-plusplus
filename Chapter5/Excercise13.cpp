#include <iostream>
using namespace std;

void fiveMore(int a[], int size) {
  for(int i=0; i<size; i++) {
    a[i] += 5;
  }
}

int main() {
  int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  fiveMore(a, 10);

  for(int i=0; i<10; i++) {
    cout << a[i] << " ";
  }

  cout << endl;
}
