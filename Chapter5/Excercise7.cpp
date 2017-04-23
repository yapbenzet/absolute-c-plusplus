#include <iostream>
using namespace std;

int main() {
  int itemsArray[10];

  for(int index=0; index < 10; index++){
    itemsArray[index] = 3 * index;
    cout << itemsArray[index] << " ";
  }

  cout << endl;
}
