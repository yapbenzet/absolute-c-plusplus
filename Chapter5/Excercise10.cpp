#include <iostream>
using namespace std;

int main() {
  int itemsArray[70] = { 1, 2, 3, 4, 5, 6, 7 };

  cout << "Size of int itemsArray[70] " << sizeof(itemsArray) << endl;
  cout << "The address of itemsArray[0] " << itemsArray << endl;
  cout << "The address of itemsArray[4] " << &itemsArray[4] << endl;
}
