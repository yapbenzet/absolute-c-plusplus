#include <iostream>
#include <string>

using namespace std;

int main() {
  string s1, s2("Hello");
  cout << "Enter a line of input: " << endl;
  cin >> s1;

  if(s1 == s2) {
    cout << "Equal" << endl;
  }
  else {
    cout << "Unequal" << endl;
  }
}
