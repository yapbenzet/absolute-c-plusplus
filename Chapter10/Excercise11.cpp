#include <iostream>
using namespace std;

int main() {
  int *arrayPtr;
  arrayPtr = new int [10];

  delete [] arrayPtr;
}
