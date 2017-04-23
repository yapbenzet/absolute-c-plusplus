#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  srand(time(NULL));

  int number = rand() % 5;
  number += 5;

  cout << number << endl;
}
