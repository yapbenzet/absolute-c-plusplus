#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int month, day;
  cout << "Welcome to your friendly weather program." << endl
  << "Enter today's date as two integers for the month and the day: " << endl;

  cin >> month >> day;
  srand(month*day);

  int prediction;
  char ans;

  cout << "Weather for today: " << endl;
  do {
    prediction = rand() % 3;
    switch(prediction) {
      case 0:
        cout << "The day will be sunny!" << endl;
        break;
      case 1:
        cout << "The day will be cloudy." << endl;
        break;
      case 2:
        cout << "The day will be stormy!" << endl;
        break;
      default:
        cout << "Weather program is no functioning properly" << endl;
    }
    cout << "Want the weather for the next day? (y/n): ";
    cin >> ans;
  } while(ans == 'y' || ans == 'Y');

  cout << "That's it from your 24-hour weather program." << endl;
  return 0;
}
