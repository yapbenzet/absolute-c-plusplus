#include <iostream>
#include <string>

using namespace std;

void newline();
int main() {
  string firstName, lastName, recordName;
  string motto = "Your records are our records.";
  cout << "Enter your first and last name: " << endl;
  cin >> firstName >> lastName;

  newline();

  recordName = lastName + ", " + firstName;
  cout << "Your name in our records is: "
  << recordName << endl;

  cout << "Our motto is " << endl << motto << endl;
  cout << "Please suggest a better (one line) motto: " << endl;
  getline(cin, motto);

  cout << "Our new motto will be: " << endl << motto << endl;

  return 0;
}

void newline() {
  char nextChar;
  do {
    cin.get(nextChar);
  } while (nextChar != '\n');
}
