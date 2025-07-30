#include <iostream>
#include <string.h>

int main() {
  std::string playerName = "Шумахер";
  int carSpeed, lapNumber = 4;
  int carEnginePower = 254;
  int carWheelsPower = 93;
  int carSteeringWheelPower = 93;
  int weatherWindPower = 21, weatherRainPower = 17;

  carSpeed = carEnginePower + carWheelsPower + carSteeringWheelPower - weatherWindPower - weatherRainPower;
  
  std::cout << "===================\n";
  std::cout << "Супер гонки. Круг " << lapNumber << "\n";
  std::cout << "===================\n";
  std::cout << playerName << " (" << carSpeed << ")\n";
  std::cout << "===================\n";
  std::cout << "Водитель: " << playerName << "\n";
  std::cout << "Скорость: " << carSpeed << "\n";
  std::cout << "-------------------\n";
  std::cout << "Оснащение\n";
  std::cout << "Двигатель: +" << carEnginePower << "\n";
  std::cout << "Колеса: +" << carWheelsPower << "\n";
  std::cout << "Руль: +" << carSteeringWheelPower << "\n";
  std::cout << "-------------------\n";
  std::cout << "Действия плохой погоды\n";
  std::cout << "Ветер: -" << weatherWindPower << "\n";
  std::cout << "Дождь: -" << weatherRainPower << "\n";
}