#include <iostream>
using namespace std;

int strlen(char str[]);

int main() {
  cout << strlen("Hello") << endl;
}

int strlen(char str[]) {
  int i = 0;
  while(str[i] != '\0') {
    i++;
  }
  return i;
}
