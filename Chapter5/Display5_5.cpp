// 각각의 골프 스코어와 스코어 평균의 차이를 보여준다.

#include <iostream>
using namespace std;

const int MAX_NUMBER_SCORES = 10;

void fillArray(int a[], int size, int& numberUsed);
double computeAverage(const int a[], int numberUsed);
void showDifference(const int a[], int numberUsed);

int main() {
  int score[MAX_NUMBER_SCORES], numberUsed;
  cout << "This program reads golf scores and shows" << endl
  << "how much each differs from the average." << endl;

  cout << "Enter golf scores: " << endl;

  fillArray(score, MAX_NUMBER_SCORES, numberUsed);
  showDifference(score, numberUsed);

  return 0;
}

void fillArray(int a[], int size, int& numberUsed) {
  cout << "Enter up to " << size << " nonnegative whole numbers." << endl
  << "Mark the end of the list with a negative number." << endl;

  int next, index = 0;
  cin >> next;

  while((next >= 0) && (index < size)) {
    a[index] = next;
    index++;
    cin >> next;
  }

  numberUsed = index;
}

double computeAverage(const int a[], int numberUsed) {
  double total = 0;

  for(int index=0; index<numberUsed; index++) {
    total += a[index];
  }

  if(numberUsed > 0) {
    return (total / numberUsed);
  }
  else {
    cout << "ERROR: number of elements is 0 in computeAverage." << endl
    << "computerAverage returns 0." << endl;

    return 0;
  }
}

void showDifference(const int a[], int numberUsed) {
  double average = computeAverage(a, numberUsed);

  cout << "Average of the " << numberUsed << " scores = " << average << endl
  << "The scores are: " << endl;

  for(int index=0; index<numberUsed; index++) {
    cout << a[index] << " differs from average by " << (a[index] - average) << endl;
  }
}
