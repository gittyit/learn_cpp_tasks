#include <iostream>

int main() {

  int a = 0;
  int res;
  
  std::cout << "Проверка на чётное число.\n";
  std::cout << "========================================================\n\n";
  std::cout << "Введите число: ";
  std::cin >> a;

  std::cout << "\n-----Проверяем-----\n\n";
  
  res = a % 2;

  if (res == 0) {
    std::cout << "Число " << a << " — чётное\n";
  } else {
    std::cout << "Число " << a << " — нечётное\n";
  }

  std::cout << std::endl << std::endl;

}