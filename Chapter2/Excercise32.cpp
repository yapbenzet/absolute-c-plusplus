#include <iostream>
using namespace std;

int main() {
  int n = 1024;
  int log = 0;

  for(int i=1; i<n; i *= 2);
  log++;

  cout << n << " " << log << endl;
}
