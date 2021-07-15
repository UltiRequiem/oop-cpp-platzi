#include <iostream>
#include <string>

using namespace std;

class Person {
public:
  string name = "Zero";
  int age = 14;
  void say_hi() { cout << name << endl; }
  void say_age() { cout << age << endl; }
};

int main() {
  Person p = Person();
  p.say_hi();
  p.say_age();
}
