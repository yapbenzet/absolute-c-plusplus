#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char stringVar[20] = "Hello";
  // stack-smashing occurs
  // when stringVar[]
  strcat(stringVar, " and Good-bye");

  cout << stringVar << endl;
}
