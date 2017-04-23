#include <iostream>
using namespace std;

int main() {
  double weight[] = { 0.1, 22.24, 33.3333 };

  cout << weight[2] << " " << weight[1] << " " << weight[0] << endl;
  weight[0] = weight[2];
  cout << weight[0] << " " << weight[2] << " " << weight[1] << endl;
}
