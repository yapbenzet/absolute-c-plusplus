#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  fstream inputStream;
  string _name, name, _score, score;
  int count;

  inputStream.open("scores.txt");
  inputStream >> count;

  inputStream >> score >> name;

  while(count > 1) {
    inputStream >> _score >> _name;
    if (_score > score) {
      score = _score;
      name = _name;
    }
    count--;
  }

  cout << name << ", " << score << endl;

  inputStream.close();
  return 0;
}
