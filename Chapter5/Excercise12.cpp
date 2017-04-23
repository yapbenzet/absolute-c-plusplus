#include <iostream>
using namespace std;

void tripler(int& n);

int main() {
  int b[5] = { 1, 2, 3, 4, 5 };
  for(int i=0; i<5; i++) {
    tripler(b[i]);
  }

  for(int i=0; i<5; i++) {
    cout << b[i] << " ";
  }
  
  cout << endl;
}

void tripler(int & n) {
  n = n * 3;
}
