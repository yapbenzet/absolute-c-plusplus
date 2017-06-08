#include <iostream>
#include <cstdlib>
#include "pfarrayd.h"

using std::cout;
using std::endl;

PFArrayD::PFArrayD() : capacity(50), used(0) {
  a = new double[capacity];
}

PFArrayD::PFArrayD(int capacityValue): capacity(capacityValue), used(0) {
  a = new double[capacity];
}

PFArrayD::PFArrayD(const PFArrayD& pfaObject): capacity(pfaObject.getCapacity()), used(pfaObject.getNumberUsed())
{
    a = new double[capacity];

    for(int i=0; i<used; i++) {
      a[i] = pfaObject.a[i];
    }
}

int PFArrayD::getCapacity() const {
  return capacity;
}

int PFArrayD::getNumberUsed() const {
  return used;
}

void PFArrayD::emptyArray() {
  for(int i=0; i<used; i++) {
    a[i] = 0;
  }
  used = 0;
}

bool PFArrayD::full() const {
  if (used >= capacity) {
    return true;
  }
  return false;
}

void PFArrayD::addElement(double element) {
  if (! full()) {
    a[used] = element;
    used++;
  }
}

double& PFArrayD::operator[] (int index) {
  if (index >= used) {
    cout << "Illegal index in PFArrayD" << endl;
    exit(0);
  }

  return a[index];
}

PFArrayD& PFArrayD::operator =(const PFArrayD& rightSide) {
  if(capacity != rightSide.capacity) {
    delete [] a;
    a = new double[rightSide.capacity];
  }

  capacity = rightSide.capacity;
  used = rightSide.used;

  for(int i=0; i<used; i++) {
    a[i] = rightSide.a[i];
  }

  return *this;
}

PFArrayD::~PFArrayD() {
  delete [] a;
}
