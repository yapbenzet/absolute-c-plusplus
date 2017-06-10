#ifndef PFARRAYBAK_H
#define PFARRAYBAK_H

#include "pfarray.h"

namespace PFArraySavitch {
  template <class T>
  class PFArrayBak: public PFArray<T> {
  public:
    PFArrayBak();
    PFArrayBak(int capacityValue);
    PFArrayBak(const PFArrayBak<T>& Object);

    void backup();
    void restore();

    PFArrayBak<T>& operator =(const PFArrayBak<T>& rightSide);
    virtual ~PFArrayBak();
  private:
    T *b;
    int usedB;
  };
}
#endif
