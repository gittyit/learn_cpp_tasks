#include <iostream>


int check_holiday_in_may() {
  int dayInMayNum, holiday = 0, firstDay=0;
  std::string dayType = "рабочий";

  std::cout << "Майские!\n\n";
  std::cout << "Укажите номер дня недели начала мая: (0 - для выхода) ";
  std::cin >> firstDay;
  std::cout << std::endl;

  if(firstDay == 0) {
    return -1;
  }
  else if (firstDay < 1 || firstDay > 7) {
    std::cout << "неверный номер дня недели: " << firstDay << ". верный от 1 до 7 включительно.\n";
    std::cout << std::endl;
    return 0;
  }
  
  std::cout << "Введите номер дня в мае: (0 - для выхода) ";
  std::cin >> dayInMayNum;
  if(dayInMayNum == 0)
    return -1;

  std::cout << std::endl;

  if (dayInMayNum < 1 || dayInMayNum > 31) {
    std::cout << "неверный номер дня: " << dayInMayNum << std::endl << std::endl;
    return 0;
  }

  // смещение для выходных
  int offset = firstDay - 1;

  // проверка праздничных
  if ( (dayInMayNum  >= 1 && dayInMayNum <= 5) ||
       (dayInMayNum >= 8 && dayInMayNum <= 10) ) {
    holiday = 1;
  // проверка выходных со смещением
  } else if ( (dayInMayNum >= (6 - offset) && dayInMayNum <= (7 - offset)) ||
    (dayInMayNum >= (13 - offset) && dayInMayNum <= (14 - offset)) ||
    (dayInMayNum >= (20 - offset) && dayInMayNum <= (21 - offset)) ||
    (dayInMayNum >= (27 - offset) && dayInMayNum <= (28 - offset)) ) {
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

  // пн вт ср чт  пт  сб вс
  //    *1 *2 *3  *4  5  6
  //  7 *8 *9 *10 11 12 13
  // 14 15 16  17 18 19 20
  // 21 22 23  24 25 26 27
  // 28 29 30  31

  // пн вт ср чт  пт сб вс
  //       *1 *2  *3  4  5
  //  6  7 *8 *9 *10 11 12
  // 13 14 15 16  17 18 19
  // 20 21 22 23  24 25 26
  // 27 28 29 30  31

  // Выходные:
  // - все субботы и воскресенья
  // - даты с 1 по 5 и с 8 по 10 мая включительно. 
  // Ввести день недели с которого начинается месяц.

  while(res != -1) {
    res = check_holiday_in_may();
  }

  return 0;

}