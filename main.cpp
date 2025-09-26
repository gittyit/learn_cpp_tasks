#include <iostream>

int main() {

  int a = 42;
  int b = 153;
  std::string result;
  
  std::cout << "Минимум из двух чисел.\n";
  std::cout << "========================================================\n\n";
  std::cout << "Введите первое число: ";
  std::cin >> a;
  std::cout << "Введите второе число: ";
  std::cin >> b;

  std::cout << "\n-----Проверяем-----\n\n";

  if (a == b) {
    std::cout << "Числа равны!\n";
  } else if (a > b) {
    std::cout << "Наименьшее число: " << b;
  } else if (a < b) {
    std::cout << "Наименьшее число: " << a;
  }

  std::cout << std::endl << std::endl;

}