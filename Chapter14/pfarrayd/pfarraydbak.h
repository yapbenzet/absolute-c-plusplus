#ifndef PFARRAYDBAK_H
#define PFARRAYDBAK_H

#include "pfarrayd.h"

class PFArrayDBak: public PFArrayD {
public:
  PFArrayDBak();
  PFArrayDBak(int capacityValue);
  PFArrayDBak(const PFArrayDBak& Object);

  void backup();
  void restore();

  PFArrayDBak& operator =(const PFArrayDBak& rightSide);

  ~PFArrayDBak();
private:
  double *b;
  int usedB;
};

#endif
