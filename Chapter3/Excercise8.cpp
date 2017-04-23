#include <iostream>
using namespace std;

double average(int a, int b, int c);

int main() {
  cout << "The average of (3, 4, 5) is: "
  << average(3, 4, 5) << endl;
}

double average(int a, int b, int c) {
  return (a + b + c) / 3.0;
}
