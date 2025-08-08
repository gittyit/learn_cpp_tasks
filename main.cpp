#include <iostream>
#include <string.h>

// 2.5.1 done
int main() {
  std::string playerName = "Шумахер";
  int carSpeed, lapNumber = 4;
  int enginePower = 254;
  int wheelsPower = 93;
  int steeringWheelPower = 93;
  int windPower = 21, rainPower = 17;

  carSpeed = enginePower + wheelsPower + steeringWheelPower - windPower - rainPower;

  std::cout << "===================\n";
  std::cout << "Супер гонки. Круг " << lapNumber << "\n";
  std::cout << "===================\n";
  std::cout << playerName << " (" << carSpeed << ")\n";
  std::cout << "===================\n";
  std::cout << "Водитель: " << playerName << "\n";
  std::cout << "Скорость: " << carSpeed << "\n";
  std::cout << "-------------------\n";
  std::cout << "Оснащение\n";
  std::cout << "Двигатель: +" << enginePower << "\n";
  std::cout << "Колеса: +" << wheelsPower << "\n";
  std::cout << "Руль: +" << steeringWheelPower << "\n";
  std::cout << "-------------------\n";
  std::cout << "Действия плохой погоды\n";
  std::cout << "Ветер: -" << windPower << "\n";
  std::cout << "Дождь: -" << rainPower << "\n";
}