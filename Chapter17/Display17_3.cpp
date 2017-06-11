#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class NoMilk {
public:
  NoMilk() {}
  NoMilk(int howMany): count(howMany) {}
  int getCount() const { return count; }
private:
  int count;
};

int main() {
  int donuts, milk;
  double dpg;

  try {
    cout << "Enter number of donuts: " << endl;
    cin >> donuts;

    cout << "Enter number of glasses of milk: " << endl;
    cin >> milk;

    if(milk <= 0) throw NoMilk(donuts);

    dpg = donuts / (double) milk;
    cout << donuts << " donuts." << endl
    << milk << " glasses of milk." << endl
    << "You have " << dpg << " donuts for each glass of milk." << endl;
  }
  catch(NoMilk e) {
    cout << e.getCount() << " donuts, and No milk!" << endl
    << "Go buy some milk." << endl;
  }

  cout << "End of program." << endl;
  return 0;
}
