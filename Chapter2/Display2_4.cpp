#include <iostream>
using namespace std;

int main() {
  int countDown;

  cout << "How many greeting do you want? ";
  cin >> countDown;

  while(countDown > 0) {
    cout << "Hello ";
    countDown--;
  }

  cout << endl;
  cout << " That's all!" << endl;

  return 0;
}
