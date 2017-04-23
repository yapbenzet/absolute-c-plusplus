#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  fstream inputStream;
  string text;
  bool moreToRead;

  inputStream.open("player.txt");
  moreToRead = inputStream >> text;

  while (moreToRead) {
    cout << text << endl;
    moreToRead = inputStream >> text;
  }

  inputStream.close();
  return 0;
}
