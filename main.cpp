#include <iostream>

int main() {

  int dayInMayNum;
  std::string dayInMayType;

  std::cout << "Майские!\n\n";
  std::cout << "Введите номер дня в мае: ";
  std::cin >> dayInMayNum;

  std::cout << std::endl;
  
  if (dayInMayNum < 1 || dayInMayNum > 31) {
    std::cout << "неверный номер дня: " << dayInMayNum << std::endl << std::endl;
    return 0;
  }
  
  if ((dayInMayNum >= 1 && dayInMayNum <= 10) ||
      (dayInMayNum >= 13 && dayInMayNum <= 14) ||
      (dayInMayNum >= 20 && dayInMayNum <= 21) ||
      (dayInMayNum >= 27 && dayInMayNum <= 28)) {
    dayInMayType = "выходной";
  } else dayInMayType = "рабочий";
  
  std::cout << dayInMayNum << " мая - это " << dayInMayType << ".";

  std::cout << std::endl << std::endl;

}