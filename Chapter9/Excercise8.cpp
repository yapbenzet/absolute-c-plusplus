#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char ourString[15] = "Hi! there!";

  cout << ourString << endl;

  for(int i=0; ourString[i] != '\0'; i++) {
    ourString[i] = 'X';
  }

  cout << ourString << endl;
}
