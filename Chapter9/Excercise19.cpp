#include <iostream>
using namespace std;

int main() {
  cout << "Enter a line of input: " << endl;
  char next;

  do {
    cin.get(next);
    cout << next;
  } while((! isdigit(next)) && (next != '\n'));

  cout << "<END OF OUTPUT" << endl;
}
