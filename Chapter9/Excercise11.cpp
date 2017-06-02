#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char song[10] = "I did it";
  char frankSong[20];

  strcpy(frankSong, song);
  strcat(frankSong, " my way!");
  cout << frankSong << endl;
}
