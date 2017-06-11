#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class NegativeNumber {
public:
  NegativeNumber() {}
  NegativeNumber(string theMessage): message(theMessage) {}

  string getMessage() const { return message; }
private:
  string message;
};

class DivideByZero {};

int main() {
  int pencils, erasers;
  double ppe;

  try {
    cout << "How many pencils do you have?" << endl;
    cin >> pencils;

    if(pencils < 0) throw NegativeNumber("pencils");

    cout << "How many erasers do you have?" << endl;
    cin >> erasers;

    if (erasers < 0) throw NegativeNumber("erasers");

    if (erasers != 0) ppe = pencils / (double) erasers;
    else throw DivideByZero();

    cout << "Each erasers must last through " << ppe << " pencils." << endl;
  }
  catch(NegativeNumber e) {
    cout << "Cannot have a negative number of " << e.getMessage() << endl;
  }
  catch(DivideByZero e) {
    cout << "Do not make any mistakes." << endl;
  }

  cout << "End of program." << endl;
  return 0;
}
