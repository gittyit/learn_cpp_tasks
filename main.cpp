#include <iostream>

int main() {

  int a = 0;
  int b = 0;
  int sum = 0;
  int res = 0;
  std::string result;
  
  std::cout << "Складываем в уме.\n";
  std::cout << "========================================================\n\n";
  std::cout << "Введите первое число: ";
  std::cin >> a;
  std::cout << "Введите второе число: ";
  std::cin >> b;
  std::cout << "Введите их сумму: ";
  std::cin >> sum;

  std::cout << "\n-----Проверяем-----\n\n";
  
  res = a + b;

  if (sum == res) {
    std::cout << "Верно!\n";
  } else {
    std::cout << "Ошибка! Верный результат: " << res;
  }

  std::cout << std::endl << std::endl;

}