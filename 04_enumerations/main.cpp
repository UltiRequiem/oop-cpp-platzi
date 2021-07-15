#include <iostream>
#include <string>

using namespace std;

int main() {
  enum days_of_week { monday = 'M', tuesday = 'T', friday = 'F' };
  days_of_week day = monday;
  cout << day << endl;
}
