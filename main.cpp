#include <iostream>

int main() {

  int dayInMayNum, firstDayInMay;
  std::string dayInMayType;
  int we11 = 6, we12 = 7;
  int we21 = 13, we22 = 14;
  int we31 = 20, we32 = 21;
  int we41 = 27, we42 = 28;
  int we51 = 0, we52 = 0;
  int shift = 0;

  std::cout << "Майские — усложнение\n\n";
  std::cout << "Введите номер дня в Мае: ";
  std::cin >> dayInMayNum;
  std::cout << "Введите номер дня недели, с которого начинается месяц в Мае: ";
  std::cin >> firstDayInMay;
  std::cout << std::endl;
  
  if ((dayInMayNum < 1 || dayInMayNum > 31) ||
      (firstDayInMay < 1 || firstDayInMay > 7)) {
    if (dayInMayNum < 1 || dayInMayNum > 31)
      std::cout << "неверный номер дня: " << dayInMayNum << "\n";
    if (firstDayInMay < 1 || firstDayInMay > 7)
      std::cout << "неверный номер дня недели начала мая: " << firstDayInMay << "\n";
    return 0;
  }

  shift = firstDayInMay - 1;
  we11 -= shift; we12 -= shift;
  we21 -= shift; we22 -= shift;
  we31 -= shift; we32 -= shift;
  we41 -= shift; we42 -= shift;
  
  if ((dayInMayNum >= 1 && dayInMayNum <= 5) ||
      (dayInMayNum >= 8 && dayInMayNum <= 10) ||
      (dayInMayNum >= we11 && dayInMayNum <= we12) ||
      (dayInMayNum >= we21 && dayInMayNum <= we22) ||
      (dayInMayNum >= we31 && dayInMayNum <= we32) ||
      (dayInMayNum >= we41 && dayInMayNum <= we42)) {
    dayInMayType = "выходной";
  } else dayInMayType = "рабочий";
  
  std::cout << dayInMayNum << " мая - это " << dayInMayType << ".";

  std::cout << std::endl << std::endl;

}