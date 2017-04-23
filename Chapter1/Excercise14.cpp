#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName, firstName, lastName;
  int age;

  cout << "Enter your first and last name." << endl;
  cin >> firstName >> lastName;

  cout << "Enter your age." << endl;
  cin >> age;

  fullName = firstName + " " + lastName;

  cout << "You are " << age << " years old, " << fullName << endl;
}
