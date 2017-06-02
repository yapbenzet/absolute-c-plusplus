#include <iostream>
using namespace std;

int main() {
  char myString[80];
  cout << "Enter a line of input: " << endl;
  cin.getline(myString, 6);
  cout << myString << " END OF OUTPUT" << endl;
}
