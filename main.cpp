#include <iostream>

int main() {

  int a = 0, b = 0;
  int res = 0;
  
  std::cout << "Кратность числа.\n";
  std::cout << "========================================================\n\n";
  std::cout << "Введите первое число: ";
  std::cin >> a;
  std::cout << "Введите второе число: ";
  std::cin >> b;

  std::cout << "\n-----Считаем-----\n\n";

  if (a == 0) {
    std::cout << "Вы ввели неверное число: " << a << "\n\n";
    return 0;
  } else if (b == 0) {
    std::cout << "Вы ввели неверное число: " << b << "\n\n";
    return 0;
  }

  res = a % b;

  if (res == 0) {
    std::cout << "Да, " << a << " делится на " << b << " без остатка!";
  } else {
    std::cout << "Нет, " << a << " не делится на " << b << " без остатка!";
  }

  std::cout << std::endl << std::endl;

}