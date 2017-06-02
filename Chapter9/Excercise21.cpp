#include <iostream>
using namespace std;

void newLine();
void getInt(int& number);


int main() {
    int n;

    getInt(n);
    cout << "Final value read in = " << n << endl
    << "End of demonstration." << endl;

    return 0;
}

// like C fflush
void newLine() {
  cin.ignore(1000, '\n');
}

void getInt(int& number) {
  char ans;
  do {
    cout << "Enter input number: ";
    cin >> number;
    cout << "You entered " << number
    << " Is that correct? (yes/no): ";
    cin >> ans;
    newLine();
  } while((ans == 'N') || (ans == 'n'));
}
