#include <iostream>
using namespace std;

void friendly();
void shy(int audienceCount);

int main() {
  friendly();
  shy(6);

  cout << "One more time: " << endl;

  shy(2);
  friendly();

  cout << "End of program." << endl;
  return 0;
}

void friendly() {
  cout << "Hello" << endl;
}

void shy(int audienceCount) {
  if (audienceCount < 5) {
    return;
  }
  cout << "Good Bye" << endl;
}
