#include <iostream>
using namespace std;

namespace Outer {
  void message();
  namespace Inner {
    void message();
  }
}

int main() {
  // message();
  Outer::message();
  Outer::Inner::message();
  using namespace Outer;
  Inner::message();

  return 0;
}

namespace Outer {
  void message() {
    cout << "Outer." << endl;
  }

  namespace Inner {
    void message() {
      cout << "Inner." << endl;
    }
  }
}
