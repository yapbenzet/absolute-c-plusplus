#include <iostream>
#include <iomanip>
using namespace std;

void echo(int a[][5], int line);

int main() {
  int a[4][5];

  for(int i=0; i<4; i++){
    for(int j=0; j<5; j++){
      cin >> a[i][j];
    }
  }

  echo(a, 4);
}

void echo(int a[][5], int line) {
  for(int i=0; i<line; i++) {
    for(int j=0; j<5; j++) {
      cout << setw(10) << a[i][j] << " ";
    }
    cout << endl;
  }
}
