#include <iostream>
using namespace std;

bool even(int number);

int main() {
  cout << even(4) << endl;
  cout << even(3) << endl;
  return 0;
}

bool even(int number) {
  if (number % 2 == 0){
    return true;
  }
  return false;
}
