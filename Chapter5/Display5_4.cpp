// 데이터를 읽어서 각각의 공장의 생산성을 막대그래프로 보여준다.

#include <iostream>
#include <cmath>
using namespace std;

const int NUMBER_OF_PLANTS = 4;

void inputData(int a[], int lastPlantNumber);
void scale(int a[], int size);
void graph(const int asteriskCount [], int lastPlantNumber);
void getTotal(int& sum);
int _round(double number);
void printAsterisks(int n);

int main() {
  int production[NUMBER_OF_PLANTS];

  cout << "This program displays a graph showing " << endl
  << "production for each plant in the company." << endl;

  inputData(production, NUMBER_OF_PLANTS);
  scale(production, NUMBER_OF_PLANTS);
  graph(production, NUMBER_OF_PLANTS);

  return 0;
}

void inputData(int a[], int lastPlantNumber) {
  for (int plantNumber=1; plantNumber <= lastPlantNumber; plantNumber++) {
    cout << endl << "Enter production data for plant number " << plantNumber
    << endl;
    getTotal(a[plantNumber - 1]);
  }
}

void getTotal(int& sum) {
  cout << "Enter number of units produced by each department." << endl
  << "Append a negative number to the end of the list." << endl;

  sum = 0;

  int next;
  cin >> next;

  while(next >= 0) {
    sum += next;
    cin >> next;
  }

  cout << "Total = " << sum << endl;
}

void scale(int a[], int size) {
  for (int index=0; index<size; index++) {
    a[index] = _round(a[index] / 1000.0);
  }
}

int _round(double number) {
  return (int) floor(number + 0.5);
}

void graph(const int asterisksCount[], int lastPlantNumber) {
  cout << endl << "Units produced in thousands of units: " << endl << endl;
  for(int plantNumber=1; plantNumber<=lastPlantNumber; plantNumber++) {
    cout << "Plant #" << plantNumber << " ";
    printAsterisks(asterisksCount[plantNumber-1]);
    cout << endl;
  }
}

void printAsterisks(int n) {
  for(int count=1; count <= n; count++) {
    cout << "*";
  }
}
