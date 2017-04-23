#include <iostream>
using namespace std;

char checkOddEven(int number);

int main() {
  int number;
  char answer;

  cout << "Check what is odd and what is even!" << endl;

  do {
    cout << "One integer please: ";
    cin >> number;

    cout << "The number " << number << " is ";

    if (checkOddEven(number) == 'O') {
      cout << "Odd.";
    }
    else {
      cout << "Even.";
    }
    cout << endl;

    cout << "Again? (y/n) ";
    cin >> answer;
  } while(answer == 'y' || answer == 'Y');
}

char checkOddEven(int number) {
  if (number % 2 == 0){
    return 'E';
  }
  else {
    return 'O';
  }
}
