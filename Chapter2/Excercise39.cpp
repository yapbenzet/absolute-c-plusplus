#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  fstream inputStream;
  string name, score;
  int count;

  inputStream.open("scores.txt");
  inputStream >> count;

  while(count > 0) {
    inputStream >> score >> name;
    cout << name << ", " << score << endl;
    count--;
  }

  inputStream.close();
  return 0;
}
