// This part requires knowledge of struct and pointer

#include <iostream>
#include <string>
using namespace std;

typedef struct _person {
  string name;
  string phoneNumber;
  string homeNumber;
  int age;
} Person;

void _printPerson(Person person);
void printPerson(const Person& person);

int main() {
  Person p;
  
  cout << "The address of p is " << &p << endl;

  _printPerson(p);
  printPerson(p);
}

void _printPerson(Person person) {
  cout << "The address of person in _printPerson is " << &person << endl;
}

void printPerson(const Person& person) {
  cout << "The address of person in printPerson is " << &person << endl;
}
