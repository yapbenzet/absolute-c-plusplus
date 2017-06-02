#include <iostream>
#include <string>

using namespace std;

int main() {
  string s1, s2("Hello");
  s1 = s2;

  s2[0] = 'J';
  cout << s1 << " " << s2 << endl;
}
