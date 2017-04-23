#include <iostream>
using namespace std;

int main() {
  int first, second, third, result;

  result = ((first = 2, second = first + 1), third = second + 1); // 4
  cout << result << endl;

  result = (first = 2, second = first + 1, third = second + 1); // *Commonly* 4
  cout << result << endl;

  return 0;
}
