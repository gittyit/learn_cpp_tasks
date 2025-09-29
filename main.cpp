#include <iostream>

int main() {

  int score = 0;
  int level = 0;
  
  std::cout << "Калькулятор опыта.\n";
  std::cout << "========================================================\n\n";
  std::cout << "Введите число очков опыта: ";
  std::cin >> score;

  std::cout << "\n-----Считаем-----\n\n";

  if (score < 0) {
    std::cout << "Вы ввели неверное число: " << score << "\n\n";
    return 0;
  }
  else if (score < 1000) {
    level = 1;
  } else if (score < 2500)  {
    level = 2;
  } else if (score < 5000) {
    level = 3;
  } else {
    level = 4;
  }

  std::cout << "Ваш уровень: " << level;
  std::cout << std::endl << std::endl;

}