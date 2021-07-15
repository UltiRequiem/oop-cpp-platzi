#include <iostream>
#include <string>

using namespace std;

class Person {
private:
  string name;
  int age;

public:
  static int number_of_persons;
  Person(string name, int age) {
    this->name = name;
    this->age = age;
    number_of_persons += 1;
  }

  ~Person() { cout << "Destruction" << endl; }

  void change_name(string name) { this->name = name; }

  void change_age(int age) { this->age = age; }

  void say_hi() { cout << name << endl; }
};

int Person::number_of_persons = 0;

int main() {
  Person p = Person("Zero", 14);
  Person p2 = Person("Zero", 14);
  Person p3 = Person("Zero", 14);

  cout << Person::number_of_persons << endl;
  p.say_hi();
}
