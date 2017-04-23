#include <iostream>
using namespace std;

bool isAlphabet(char ch);

int main() {
  cout << isAlphabet('1') << endl;
  cout << isAlphabet('a') << endl;
  cout << isAlphabet('A') << endl;

  return 0;
}

bool isAlphabet(char ch) {
  if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z')) {
    return true;
  }
  else {
    return false;
  }
}
