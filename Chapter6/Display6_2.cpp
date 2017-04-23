#include <iostream>
using namespace std;

struct Date {
  int month;
  int day;
  int year;
};

struct CDAccountV1 {
  double initialBalance;
  double interestRate;
  int term;
  Date maturity;
  double balanceAtMaturity;
};

void getCDData(CDAccountV1& theAccount);
void getDate(Date& theDate);

int main() {
  CDAccountV1 account;
  cout << "Enter account data on the day account was opened: " << endl;
  getCDData(account);

  double rateFraction, interest;
  rateFraction = account.interestRate / 100.0;
  interest = account.initialBalance*(rateFraction*(account.term / 12.0));

  account.balanceAtMaturity = account.initialBalance + interest;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << "When the CD matured on " << account.maturity.month
  << "-" << account.maturity.day << "-" << account.maturity.year << endl
  << "it had a balance of $" << account.balanceAtMaturity << endl;

  return 0;
}

void getCDData(CDAccountV1& theAccount) {
  cout << "Enter account initial balance $";
  cin >> theAccount.initialBalance;

  cout << "Enter account interest rate: ";
  cin >> theAccount.interestRate;

  cout << "Enter the number of months until maturity: ";
  cin >> theAccount.term;

  cout << "Enter the maturity date:" << endl;
  getDate(theAccount.maturity);
}

void getDate(Date& theDate) {
  cout << "Enter month: ";
  cin >> theDate.month;

  cout << "Enter day: ";
  cin >> theDate.day;

  cout << "Enter year: ";
  cin >> theDate.year;
}
