#include <iostream>
using namespace std;

int main() {
  double a[10];
  cout << "Ten double please." << endl;

  for(int i=0; i<10; i++){
    cin >> a[i];
  }

  for(int i=0; i<9; i++){
    if (a[i] > a[i+1]) {
      cout << "Array elements " << i << " and " << (i + 1)
      << " are out of order." << endl;
    }
  }

  cout << endl;
}
