#include <iostream>
#include <string>

using namespace std;

int main() {
  union number_letter {
    int number;
    char letter;
  };

  number_letter x = {'A'};
  number_letter y = {9};

  cout << x.letter << endl;
  cout << y.number << endl;
}
