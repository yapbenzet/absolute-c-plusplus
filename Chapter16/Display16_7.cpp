// Includes Excercise 12

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

#include "./pfarray/pfarray.h"
#include "./pfarray/pfarray.cpp"
using PFArraySavitch::PFArray;

template <class T>
void showData(PFArray<T> theObject);

int main() {
    PFArray<int> a(10);

    cout << "Enter up to 10 nonnegative integers." << endl
    << "Place a negative number at the end." << endl;

    int next;
    cin >> next;
    while((next >= 0) && (!a.full())) {
      a.addElement(next);
      cin >> next;
    }

    if(next >= 0) {
      cout << "Could not read all numbers." << endl;
      while(next >= 0) {
        cin >> next;
      }
    }

    cout << "You entered the following: " << endl;
    int index;
    int count = a.getNumberUsed();

    for(index = 0; index < count; index++) cout << a[index] << " ";
    cout << endl;

    PFArray<string> b(3);

    cout << "Enter threee words: " << endl;
    string nextWord;
    for(index = 0; index < 3; index++) {
      cin >> nextWord;
      b.addElement(nextWord);
    }

    cout << "You wrote the following: " << endl;
    showData(b);

    cout << "I hope you really mean it." << endl;

    return 0;
}

template <class T>
void showData(PFArray<T> theObject) {
  for(int i=0; i<theObject.getNumberUsed(); i++) cout << theObject[i] << " ";
  cout << endl;
}
