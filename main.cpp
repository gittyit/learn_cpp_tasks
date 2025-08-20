#include <iostream>

int main() {

  int a = 42;
  int b = 153;
  int c;
  
  std::cout << "Программа обмена значений переменных местами без доп. переменных.\n";
  std::cout << "========================================================\n\n";
  std::cout << "a: " << a << "\n";
  std::cout << "b: " << b << "\n\n";

  std::cout << "Меняем значения.\n\n";

  std::swap(a, b);

  std::cout << "a: " << a << "\n";
  std::cout << "b: " << b << "\n";

}