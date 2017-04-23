#include <iostream>
using namespace std;

void r(bool result) {
  cout << result << endl;
}

int main() {
  int count = 0;
  int limit = 10;
  int x = 5;
  int y = 10;

  r((count == 0) && (limit < 20)); //true
  r(count == 0 && limit < 20); //true
  r((limit > 20) || (count < 5)); //true
  r(!(count == 12)); //true
  r((count == 1) && (x < y)); //false
  r((count < 10) || (x < y)); //true
  r(!((count < 10) || (x < y) && (count >= 0))); //false
  r(((count / limit) > 7) && (limit < 20)); //false
  r((limit < 20) || ((count / limit) > 7)); //true
  r(((count / limit) > 7) && (limit < 0)); //false
  r((limit < 0) && ((count / limit) > 7)); //false
  r((5 && 7) + (!6)); //1, true
}
