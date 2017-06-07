#include <iostream>
using namespace std;

namespace Hello {
  void message();
}

namespace GoodBye {
  void message();
}

void message();

int main() {
  message();
  using GoodBye::message;
  {
    using Hello::message;
    message();
    GoodBye::message();
  }
  message();
  Hello::message();
  message();
}

void message() {
  cout << "Global message." << endl;
}

namespace Hello {
  void message() {
    cout << "Hello." << endl;
  }
}

namespace GoodBye {
  void message() {
    cout << "Good-Bye." << endl;
  }
}
