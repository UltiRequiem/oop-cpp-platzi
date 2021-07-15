#include <iostream>

using namespace std;

int main() {
  char character = 'A';
  char *pointer = &character;
  cout << (int *)&character << endl;
  cout << (int *)pointer << endl;
  cout << *pointer << endl;
}
