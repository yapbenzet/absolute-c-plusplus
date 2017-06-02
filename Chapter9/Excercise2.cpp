#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char singingString[20] = "DoBeDo";
  strcat(singingString, " to you");

  cout << singingString << endl;
}
