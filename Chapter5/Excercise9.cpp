#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int autofill[15000];

  for(int i=0; i<15000; i++){
    srand(i);

    autofill[i] = rand();
    cout << autofill[i] << " ";
  }

  cout << endl;
}
