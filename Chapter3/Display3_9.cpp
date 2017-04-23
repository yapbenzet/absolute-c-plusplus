#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

double area(double radius);
double volume(double radius);

int main() {
  double radiusOfBoth, areaOfCircle, volumeOfSphere;

  cout << "Enter a radius to use for both a circle and a sphere (in inches): \n";
  cin >> radiusOfBoth;

  areaOfCircle = area(radiusOfBoth);
  volumeOfSphere = volume(radiusOfBoth);

  cout << "Radius = " << radiusOfBoth << " inches" << endl
  << "Area of circle: " << areaOfCircle << " square inches" << endl
  << "Volume of sphere: " << volumeOfSphere << " cubic inches" << endl;

  return 0;
}

double area(double radius) {
  return pow(radius, 2) * PI;
}

double volume(double radius) {
  return (4.0/3.0) * PI * pow(radius, 3);
}
