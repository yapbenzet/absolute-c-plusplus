template <class T>
void sort(T a[], int numberUsed) {
  int indexOfNextSmallest;

  for(int index=0; index<numberUsed-1; index++) {
    indexOfNextSmallest = indexOfSmallest(a, index, numberUsed);
    swapValues(a[index], a[indexOfNextSmallest]);
  }
}

template <class T>
void swapValues(T& variable1, T& variable2) {
  T temp;
  temp = variable1;
  variable1 = variable2;
  variable2 = temp;
}

template <class T>
int indexOfSmallest(const T a[], int startIndex, int numberUsed) {
  T min = a[startIndex];
  int indexOfMin = startIndex;

  for(int index = startIndex + 1; index < numberUsed; index++) {
    if (a[index] < min) {
      min = a[index];
      indexOfMin = index;
    }
  }

  return indexOfMin;
}
