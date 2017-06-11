// Caution: Do not run *this code* on the Operating Systems
// that has no specific runtime such as *Linux*,
// your computer will crash and 'll need to *reboot* your computer!

#include <iostream>
#include <new>

using std::cout;
using std::endl;
using std::bad_alloc;

int main() {
  int* a;
  int num = 0;

  try {
    while(true) {
      a = new int[1000];
      cout << "The program made a " << num << "th big array" << endl;

      num++;
    }
  }
  catch (bad_alloc) {
    cout << "What have you done? Out of memory!" << endl;
  }
}
