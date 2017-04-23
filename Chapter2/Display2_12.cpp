#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  fstream inputStream;
  string text;

  inputStream.open("player.txt");

  while(inputStream >> text) {
    cout << text << endl;
  }

  inputStream.close();
  return 0;
}
