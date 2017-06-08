#include <iostream>
#include "pfarrayd.h"
#include "pfarraydbak.h"

using std::cout;
using std::endl;

PFArrayDBak::PFArrayDBak() : PFArrayD(), usedB(0) {
  b = new double[capacity];
}

PFArrayDBak::PFArrayDBak(int capacityValue) : PFArrayD(capacityValue), usedB(0) {
  b = new double[capacity];
}

PFArrayDBak::PFArrayDBak(const PFArrayDBak& Object) : PFArrayD(Object), usedB(0) {
  b = new double[capacity];
  usedB = Object.usedB;
  for(int i=0; i<usedB; i++) {
    b[i] = Object.b[i];
  }
}

void PFArrayDBak::backup() {
  usedB = used;
  for(int i=0; i<usedB; i++) {
    b[i] = a[i];
  }
}

void PFArrayDBak::restore() {
  used = usedB;
  for(int i=0; i<used; i++) {
    a[i] = b[i];
  }
}

PFArrayDBak& PFArrayDBak::operator =(const PFArrayDBak& rightSide) {
  int oldCapacity = capacity;
  PFArrayD::operator = (rightSide);

  if(oldCapacity != capacity) {
    delete [] b;
    b = new double[rightSide.capacity];
  }

  usedB = rightSide.usedB;
  for(int i=0; i<usedB; i++) {
    b[i] = rightSide.b[i];
  }

  return *this;
}

PFArrayDBak::~PFArrayDBak() {
  delete [] b;
}
