#include <iostream>
#include <string>

using namespace std;

struct Person {
  string name;
  int age;

  // Constructor
  Person(string n, int a) {
    name = n;
    age = a;
  }
};

int main() {
  // Traditional way
  Person zero = Person("Eliaz", 14);
  cout << zero.name << endl;

  // Dynamic gestion of memory
  Person *p = new Person("Zero Requiem", 14);
  cout << p->age << endl;
}
