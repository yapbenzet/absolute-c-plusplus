#include <iostream>
using namespace std;

void fillArray(int a[], int size, int& numberUsed);
void sort(int a[], int numberUsed);
void swapValues(int& v1, int& v2);
int indexOfSmallest(const int a[], int startIndex, int numberUsed);

int main() {
  cout << "This program sorts numbers from lowest to highest." << endl;

  int sampleArray[10], numberUsed;
  fillArray(sampleArray, 10, numberUsed);
  sort(sampleArray, numberUsed);

  cout << "In sorted order the numbers are" << endl;
  for(int index=0; index<numberUsed; index++){
    cout << sampleArray[index] << " ";
  }
  cout << endl;

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

void sort(int a[], int numberUsed) {
  int indexOfNextSmallest;
  for(int index=0; index<numberUsed-1; index++) {
    indexOfNextSmallest = indexOfSmallest(a, index, numberUsed);
    swapValues(a[index], a[indexOfNextSmallest]);
  }
}

void swapValues(int& v1, int& v2) {
  int temp;
  temp = v1;

  v1 = v2;
  v2 = temp;
}

int indexOfSmallest(const int a[], int startIndex, int numberUsed) {
  int min = a[startIndex], indexOfMin = startIndex;

  for(int index=startIndex+1; index<numberUsed; index++){
    if (a[index] < min) {
      min = a[index];
      indexOfMin = index;
    }
  }

  return indexOfMin;
}
