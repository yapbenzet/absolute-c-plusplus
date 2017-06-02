#include <iostream>
using namespace std;

int main() {
  cout << "Enter a line of input: " << endl;
  char next;

  do {
    if (! islower(next)) cout << next;
    cin >> next;
  } while(next != '\n');
}
