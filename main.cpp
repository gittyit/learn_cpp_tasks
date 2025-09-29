#include <iostream>

int main() {

  int weekDayNum;
  std::string weekDay;
  std::string menuPos1, menuPos2, menuPos3, menuPos4;
  std::string soup1 = "Гороховый суп";
  std::string soup2 = "Щавельный суп";
  std::string soup3 = "Борщ";
  std::string soup4 = "Солянка";
  std::string salad1 = "«Цезарь» с креветками";
  std::string salad2 = "«Оливье»";
  std::string salad3 = "Овощной";
  std::string second1 = "Куриная ножка с пюре";
  std::string second2 = "Баварские колбаски с капустой";
  std::string drink1 = "Морс";
  std::string drink2 = "Компот";
  std::string drink3 = "Сок";

  std::cout << "Меню ресторана.\n\n";
  std::cout << "Введите день недели (от 1 до 7): ";
  std::cin >> weekDayNum;

  if (weekDayNum < 1 || weekDayNum > 7) {
    std::cout << "Не верный день недели: " << weekDayNum << "\n\n";
    return 0;
  }
  else if (weekDayNum == 1) {
    weekDay = "понедельник";
    menuPos1 = soup2;
    menuPos2 = salad1;
    menuPos3 = second1;
    menuPos4 = drink1;
  } else if (weekDayNum == 2) {
    weekDay = "вторник";
    menuPos1 = soup1;
    menuPos2 = salad2;
    menuPos3 = second2;
    menuPos4 = drink2;
  } else if (weekDayNum == 3) {
    weekDay = "среда";
    menuPos1 = soup3;
    menuPos2 = salad1;
    menuPos3 = second1;
    menuPos4 = drink3;
  } else if (weekDayNum == 4) {
    weekDay = "четверг";
    menuPos1 = soup4;
    menuPos2 = salad3;
    menuPos3 = second2;
    menuPos4 = drink3;
  } else if (weekDayNum == 5) {
    weekDay = "пятница";
    menuPos1 = soup1;
    menuPos2 = salad1;
    menuPos3 = second1;
    menuPos4 = drink1;
  } else if (weekDayNum == 6) {
    weekDay = "суббота";
    menuPos1 = soup3;
    menuPos2 = salad1;
    menuPos3 = second2;
    menuPos4 = drink2;
  } else if (weekDayNum == 7) {
    weekDay = "воскресенье";
    menuPos1 = soup2;
    menuPos2 = salad3;
    menuPos3 = second1;
    menuPos4 = drink2;
  }

  std::cout << "\nМеню сегодня (" << weekDay << "):\n";
  std::cout << menuPos1 << "\n";
  std::cout << "Салат " << menuPos2 << "\n";
  std::cout << menuPos3 << "\n";
  std::cout << menuPos4 << "\n";

  std::cout << std::endl;

}