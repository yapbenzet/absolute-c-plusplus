#include <iostream>
#include <string>

using namespace std;

int main() {
  string firstName, lastName;

  cout << "Enter your first and last name: " << endl;
  cin >> firstName >> lastName;

  cout << "Your last name is spelled: " << endl;

  int i;
  for(int i=0; i < lastName.length(); i++) {
    cout << lastName[i] << " ";
    lastName[i] = '-';
  }
  cout << endl;

  for(int i=0; i < lastName.length(); i++) {
    cout << lastName[i] << " ";
  }
  cout << endl;

  cout << "Good day " << firstName << endl;
  return 0;
}
