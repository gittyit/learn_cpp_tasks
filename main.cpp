#include <iostream>

int main() {

  int a = 42;
  int b = 153;
  int c;
  
  std::cout << "a: " << a << "\n";
  std::cout << "b: " << b << "\n\n";

  std::cout << "Меняем значения.\n\n";

  c = a;
  a = b;
  b = c;

  std::cout << "a: " << a << "\n";
  std::cout << "b: " << b << "\n";

}