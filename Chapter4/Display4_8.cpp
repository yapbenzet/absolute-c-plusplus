#include <iostream>
using namespace std;

void showVolume(int length, int width = 1, int height = 1);
// Default Parameter, only once!

int main() {
  showVolume(4, 6, 2);
  showVolume(4, 6);
  showVolume(4);

  return 0;
}

void showVolume(int length, int width, int height) {
  cout << "Volume of a box with" << endl
  << "Length = " << length << " , Width = " << width << endl
  << "and Height = " << height << " is " << length * width * height << endl;
}
