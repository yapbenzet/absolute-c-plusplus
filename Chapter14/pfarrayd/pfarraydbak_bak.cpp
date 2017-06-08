#include <iostream>
#include "pfarrayd.h"
#include "pfarraydbak.h"

using std::cout;
using std::endl;

PFArrayDBak::PFArrayDBak() : PFArrayD(), usedB(0) {
  b = new double[getCapacity()];
}

PFArrayDBak::PFArrayDBak(int capacityValue) : PFArrayD(capacityValue), usedB(0) {
  b = new double[getCapacity()];
}

PFArrayDBak::PFArrayDBak(const PFArrayDBak& Object) : PFArrayD(Object), usedB(0) {
  b = new double[getCapacity()];
  usedB = Object.usedB;
  for(int i=0; i<usedB; i++) {
    b[i] = Object.b[i];
  }
}

void PFArrayDBak::backup() {
  usedB = getNumberUsed();
  for(int i=0; i<usedB; i++) {
    b[i] = operator[] (i);
  }
}

void PFArrayDBak::restore() {
  emptyArray();

  for(int i=0; i<usedB; i++) {
    addElement(b[i]);
  }
}

PFArrayDBak& PFArrayDBak::operator =(const PFArrayDBak& rightSide) {
  int oldCapacity = getCapacity();
  PFArrayD::operator = (rightSide);

  if(oldCapacity != rightSide.getCapacity()) {
    delete [] b;
    b = new double[rightSide.getCapacity()];
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
