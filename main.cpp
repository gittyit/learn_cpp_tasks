#include <iostream>

int main() {

  int mansCount, mansPerDay;
  int barbersCount, mansPerBarber;
  int requiredBarbersCount;

  std::cout << "************** Барбершоп-калькулятор **************\n";
  std::cout << "Введите число мужчин в городе: ";
  std::cin >> mansCount;

  std::cout << "Сколько уже барберов удалось нанять? ";
  std::cin >> barbersCount;

  // Сколько человек нужно постричь за день?
  mansPerDay = mansCount / 30;
  // Сколько человек может постричь один барбер за одну смену?
  mansPerBarber = 8; // один человек в час, смена 8 часов
  requiredBarbersCount = mansPerDay / mansPerBarber;

  std::cout << "Необходимое число барберов: " << requiredBarbersCount << "\n";
  
  if (requiredBarbersCount > barbersCount){
      std::cout << "Нужно больше барберов!!!\n";
  } else {
      std::cout << "Барберов хватает!!!\n";
  }

  std::cout << std::endl << std::endl;

}