#include <iostream>

int check_holiday_in_may() {
  int dayInMayNum, holiday = 0;
  std::string dayType = "рабочий";
  
  std::cout << "Майские!\n\n";
  std::cout << "Введите номер дня в мае: (0 - для выхода) ";
  std::cin >> dayInMayNum;
  if(dayInMayNum == 0)
    return -1;

  std::cout << std::endl;

  if (dayInMayNum < 1 || dayInMayNum > 31) {
    std::cout << "неверный номер дня: " << dayInMayNum << std::endl << std::endl;
    return -1;
  }

  
  if ((dayInMayNum >= 1 && dayInMayNum <= 5) ||
      (dayInMayNum >= 8 && dayInMayNum <= 10) ) {
    holiday = 1;
  } else if ((dayInMayNum >= 6 && dayInMayNum <= 7) ||
    (dayInMayNum >= 13 && dayInMayNum <= 14) ||
    (dayInMayNum >= 20 && dayInMayNum <= 21) ||
    (dayInMayNum >= 27 && dayInMayNum <= 28)) {
    holiday = 1;
  }


  if (holiday == 1) {
    dayType = "выходной";
  }

  std::cout << dayInMayNum << " мая - это " << dayType << ".";

  std::cout << std::endl << std::endl;
  return 0;
}

int main() {
  int res = 0;
  
  // пн вт  ср чт пт сб вс
  // *1 *2  *3 *4 *5  6  7
  // *8 *9 *10 11 12 13 14
  // 15 16  17 18 19 20 21
  // 22 23  24 25 26 27 28
  // 29 30  31

  // Выходные:
  // - все субботы и воскресенья
  // - даты с 1 по 5 и с 8 по 10 мая включительно. 
  // Месяц всегда начинается с понедельника.

  while(res != -1) {
    res = check_holiday_in_may();
  }

}