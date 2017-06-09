#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Pet {
public:
  string name;
  virtual void print() const;
};

class Dog: public Pet {
public:
  string breed;
  virtual void print() const;
};

int main() {
  Dog vdog;
  Pet vpet;

  vdog.name = "Tiny";
  vdog.breed = "Great Dane";

  vpet = vdog;

  cout << "The slicing problem: " << endl;
  vpet.print();

  cout << "Note that it was print from Pet that was invoked." << endl;

  cout << "The slicing problem defeated: " << endl;
  Pet *ppet;
  Dog *pdog;

  pdog = new Dog;
  pdog->name = "Tiny";
  pdog->breed = "Great Dane";

  ppet = pdog;
  // virtual
  ppet->print();
  pdog->print();

  // cout << "name: " << ppet->name << endl;
  // cout << "breed: " << ppet->breed << endl;

  return 0;
}

void Dog::print() const {
  cout << "name: " << name << endl;
  cout << "breed: " << breed << endl;
}

void Pet::print() const {
  cout << "name: " << name << endl;
}
