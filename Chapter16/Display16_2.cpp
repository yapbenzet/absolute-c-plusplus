#include <iostream>
using std::cout;
using std::endl;

template <class T>
void sort(T a[], int numberUsed);

template <class T>
void swapValues(T& variable1, T& variable2);

template <class T>
int indexOfSmallest(const T a[], int startIndex, int numberUsed);

#include "Display16_3.cpp"

int main() {
  int i;
  int a[10] = {9, 8, 7, 6, 5, 1, 2, 3, 0, 4};

  cout << "Unsorted integers: " << endl;
  for(int i=0; i<10; i++) cout << a[i] << " ";
  cout << endl;

  sort(a, 10);

  cout << "In sorted order the integers are: " << endl;
  for(i=0; i<10; i++) cout << a[i] << " ";
  cout << endl;

  double b[5] = {5.5, 4.4, 1.1, 3.3, 2.2};

  cout << "Unsorted doubles: " << endl;
  for(i=0; i<5; i++) cout << b[i] << " ";
  cout << endl;

  sort(b, 5);

  cout << "In sorted order the doubles are: " << endl;
  for(i=0; i<5; i++) cout << b[i] << " ";
  cout << endl;

  char c[7]  = {'G', 'E', 'N', 'E', 'R', 'I', 'C'};
  cout << "Unsorted characters: " << endl;
  for(i=0; i<7; i++) cout << c[i] << " ";
  cout << endl;

  sort(c, 7);

  for(i=0; i<7; i++) cout << c[i] << " ";
  cout << endl;

  return 0;
}
