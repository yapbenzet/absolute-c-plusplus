#include <iostream>
using namespace std;

namespace Space1 {
  void greeting();
}

namespace Space2 {
  void greeting();
}

void bigGreeting();
int main() {
  {
    using namespace Space2;
    greeting();
  }

  {
    using namespace Space1;
    greeting();
  }

  bigGreeting();

  return 0;
}

namespace Space1 {
  void greeting() {
    cout << "Hello from Space1" << endl;
  }
}

namespace Space2 {
  void greeting() {
    cout << "Hello from Space2" << endl;
  }
}

void bigGreeting() {
  cout << "A Big Global Hello!" << endl;
}
