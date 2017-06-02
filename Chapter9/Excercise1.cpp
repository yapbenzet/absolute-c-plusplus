#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char stringVar[10] = "Hello";
  char stringVar1[10] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char stringVar2[10] = {'H', 'e', 'l', 'l', 'o'};
  char stringVar3[6] = "Hello";
  char stringVar4[] = "Hello";

  cout << stringVar << endl
  << stringVar1 << endl
  << stringVar2 << endl
  << stringVar3 << endl
  << stringVar4 << endl;

  cout << strcmp(stringVar, stringVar1) << endl
  << strcmp(stringVar, stringVar2) << endl
  << strcmp(stringVar, stringVar3) << endl
  << strcmp(stringVar, stringVar4) << endl
  << strcmp(stringVar1, stringVar2) << endl
  << strcmp(stringVar1, stringVar3) << endl
  << strcmp(stringVar1, stringVar4) << endl
  << strcmp(stringVar2, stringVar3) << endl
  << strcmp(stringVar2, stringVar4) << endl
  << strcmp(stringVar3, stringVar4) << endl;
}
