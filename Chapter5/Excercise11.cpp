#include <iostream>
using namespace std;

void tripler(int &n){
  n = 3 * n;
}

int main() {
  int a[3] = { 4, 5, 6 }, number = 2;
  tripler(a[2]);
  tripler(a[3]);
  tripler(a[number]);
  // tripler(a);
  tripler(number);
}
