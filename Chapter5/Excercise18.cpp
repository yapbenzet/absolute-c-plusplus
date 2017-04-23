// 조건을 변경한 문제. fillArray와 같은 코드를 사용하지 않음.

#include <iostream>
using namespace std;

int main() {
  char letterBox[11] = { 0, };
  int index = 0;

  cout << "Enter a word not bigger than 10 letters." << endl
  << "Mark the end of the word with a period." << endl;

  cin >> letterBox;

  for(index=0; (letterBox[index] != '.' && index < 10); index++);

  for(index--; index >= 0; index--) {
    cout << letterBox[index];
  }
  cout << endl;
}
