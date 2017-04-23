#include <iostream>
using namespace std;

int main() {
  for(int i=1; i<=10; i++){
    if (i < 5 && i != 2) {
      cout << 'X';
    }
  }
  cout << endl;

  for(int i=1; i<=10; i+=3){
    cout << 'X';
  }
  cout << endl;
  
  for(long n=100; n<1000; n+=100){
    cout << 'X';
  }
  cout << endl;
}
