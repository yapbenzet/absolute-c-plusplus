#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
  double seed;
  double number;

  cout << "Seed number please: " << endl;
  cin >> seed;

  srand(seed);

  number = (RAND_MAX - rand()) / static_cast<double>(RAND_MAX);
  /*
  number = rand();

  while(number > 1){
    number /= 10;
  }
  */
  cout << number;
}
