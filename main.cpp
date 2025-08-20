#include <iostream>

int main() {

  int halfThirdDayLen, beginHeight, dailyGrowth, nightFade;
  
  std::cout << "Программа расчета высоты бамбука в середине третьего дня.\n";
  std::cout << "========================================================\n\n";
  std::cout << "Введите данные роста бамбука в см.\n";
  std::cout << "Начальная высота: "; std::cin >> beginHeight;
  std::cout << "Ежедневный рост: "; std::cin >> dailyGrowth;
  std::cout << "Потери ночью: "; std::cin >> nightFade;

  halfThirdDayLen = beginHeight + (dailyGrowth - nightFade) * 2 +
    dailyGrowth / 2;

  std::cout << "--------- Результат ---------\n";
  std::cout << "Высота бамбука в середине третьего дня: " << halfThirdDayLen << "\n";

}