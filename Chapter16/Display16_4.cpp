// Include Excercise 11

#include <iostream>
using std::cout;
using std::endl;

template <class T>
class Pair {
public:
  Pair();
  Pair(T firstValue, T secondValue);

  void setFirst(T newValue);
  void setSecond(T newValue);

  T getFirst() const;
  T getSecond() const;
private:
  T first;
  T second;
};

template <class T>
Pair<T>::Pair(T firstValue, T secondValue) {
  first = firstValue;
  second = secondValue;
}

template <class T>
void Pair<T>::setFirst(T newValue) {
  first = newValue;
}

template <class T>
void Pair<T>::setSecond(T newValue) {
  second = newValue;
}

template <class T>
T Pair<T>::getFirst() const {
  return first;
}

template <class T>
T Pair<T>::getSecond() const {
  return second;
}

template <class T>
T addUp(const Pair<T>& thePair) {
  return thePair.getFirst() + thePair.getSecond();
}

int main() {
  Pair<int> p(1, 2);
  Pair<double> q(1.0, 3.0);
  Pair<char> r('A', 'B');

  cout << "Integer Pair: " << p.getFirst() << " & " << p.getSecond() << endl;
  cout << "Double Pair: " << q.getFirst() << " & " << q.getSecond() << endl;
  cout << "Character Pair: " << r.getFirst() << " & " << r.getSecond() << endl;

  p.setFirst(3);
  p.setSecond(5);

  cout << "After setting new value to Integer Pair: " << endl;
  cout << "Integer Pair: " << p.getFirst() << " & " << p.getSecond() << endl;

  cout << "And the sum of Inter Pair is: " << addUp(p) << endl;

  return 0;
}
