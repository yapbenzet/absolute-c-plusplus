#include <iostream>
using namespace std;

int main() {
  {
    int x = 1;
    cout << x << endl;
    {
      cout << x << endl;
      int x = 2;
      cout << x << endl;
      {
        cout << x << endl;
        int x = 3;
        cout << x << endl;
      }
      cout << x << endl;
    }
    cout << x << endl;
  }
}
