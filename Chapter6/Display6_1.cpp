#include <iostream>
using namespace std;

// 예금의 은행 증명서에 대한 구조체
struct CDAccountV1{
  double balance;
  double interestRate;
  int term; // 만기일까지의 개월 수
};

void getData(CDAccountV1& theAccount);

int main() {
  CDAccountV1 account;
  getData(account);

  double rateFraction, interest;
  rateFraction = account.interestRate / 100.0;
  interest = account.balance*(rateFraction*account.term/12.0);
  account.balance += interest;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << "When your CD matures in " << account.term << " months," << endl
  << "it will have a balance of $" << account.balance << endl;
}

void getData(CDAccountV1& theAccount) {
  cout << "Enter account balance: $";
  cin >> theAccount.balance;

  cout << "Enter account interest rate: ";
  cin >> theAccount.interestRate;

  cout << "Enter the number of months until maturity: ";
  cin >> theAccount.term;
}
