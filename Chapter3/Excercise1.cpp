#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
  cout << sqrt(4.0) << endl; // 2.0
  cout << sqrt(25*25-4*5*3) << endl; // 23.769...
  cout << pow(2.0, 4.0) << endl; // 16.0
  cout << pow(5, 3) << endl; // 125
  cout << pow(20.0, 0) << endl; // 1
  cout << pow(1.1, 5) << endl; // 1.610...
  cout << abs(3567) << endl; // 3567
  cout << abs(-5667) << endl; // 5667
  cout << abs(0) << endl; // 0
  cout << fabs(-1.0) << endl; // float, cmath 1.0
  cout << labs(-3786) << endl; // 3786
  cout << fabs(389.58) << endl; // 389.58
  cout << ceil(5.10) << endl; // 6.0
  cout << ceil(5.6) << endl; // 6.0
  cout << floor(5.1) << endl; // 5.0
  cout << floor(99.99) << endl; // 99.0
  cout << pow(9.0, 2)/2.0 << endl; // 40.5
  cout << pow(3*3.0, 2)/2 << endl; // 40.5
  cout << 9/abs(-2) << endl; // 4
  cout << (9+sqrt(9.0))/3.0 << endl; // 4.0
  cout << sqrt(pow(abs(-3), 2)) << endl; // 3
}
