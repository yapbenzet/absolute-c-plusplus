#include <iostream>
using namespace std;

int main() {
  char vowels[5] = { 'A', 'E', 'I', 'O', 'U' };

  for(int vowelIndex=0; vowelIndex<5; vowelIndex++) {
    cout << vowels[vowelIndex];
  }
  cout << endl;
}
