#include <iostream>

int main() {

  std::string stop1 = "Улица программистов", stop2 = "Проспект алгоритмов",
  stop3 = "Улица космонавтов", stop4 = "Проспект летчиков";
  int passNum = 0, passengersIn = 0, passengersOut = 0;

  std::cout << "-----------Начало маршрута---------\n";
  std::cout << "В салоне пассажиров: " << passNum << "\n";
  std::cout << "Отправляемся на остановку «" << stop1 << "».\n";
  std::cout << "-----------Едем---------\n";
  std::cout << "Прибываем на остановку «" << stop1 << "».\n";
  std::cout << "В салоне пассажиров: " << passNum << "\n\n";
  std::cout << "Сколько пассажиров вышло на остановке? "; std::cin >> passengersOut;
  std::cout << "Сколько пассажиров зашло на остановке? "; std::cin >> passengersIn;
  std::cout << "\n";
  passNum = passNum + passengersIn - passengersOut;

  std::cout << "В салоне пассажиров: " << passNum << "\n\n";
  std::cout << "Отправляемся на остановку «" << stop2 << "». \n";
  std::cout << "-----------Едем---------\n";
  std::cout << "Прибываем на остановку «" << stop2 << "».\n";
  std::cout << "В салоне пассажиров: " << passNum << "\n\n";
  std::cout << "Сколько пассажиров вышло на остановке? "; std::cin >> passengersOut;
  std::cout << "Сколько пассажиров зашло на остановке? "; std::cin >> passengersIn; std::cout << "\n";
  passNum = passNum + passengersIn - passengersOut;

  std::cout << "В салоне пассажиров: " << passNum << "\n\n";
  std::cout << "Отправляемся на остановку «" << stop3 << "». \n";
  std::cout << "-----------Едем---------\n";
  std::cout << "Прибываем на остановку «" << stop3 << "».\n";
  std::cout << "В салоне пассажиров: " << passNum << "\n\n";
  std::cout << "Сколько пассажиров вышло на остановке? "; std::cin >> passengersOut;
  std::cout << "Сколько пассажиров зашло на остановке? "; std::cin >> passengersIn; std::cout << "\n";
  passNum = passNum + passengersIn - passengersOut;

  std::cout << "В салоне пассажиров: " << passNum << "\n\n";
  std::cout << "Отправляемся на остановку «" << stop4 << "». \n";
  std::cout << "-----------Едем---------\n";
  std::cout << "Прибываем на остановку «" << stop4 << "».\n";
  std::cout << "В салоне пассажиров: " << passNum << "\n\n";
  std::cout << "Сколько пассажиров вышло на остановке? "; std::cin >> passengersOut;
  std::cout << "Сколько пассажиров зашло на остановке? "; std::cin >> passengersIn; std::cout << "\n";
  passNum = passNum + passengersIn - passengersOut;

  std::cout << "В салоне пассажиров: " << passNum << "\n";
  std::cout << "-----------Конец маршрута---------\n";

  std::cout << "Всего заработали: 100 руб.\n";
  std::cout << "Зарплата водителя: 25 руб.\n";
  std::cout << "Расходы на топливо: 20 руб.\n";
  std::cout << "Налоги: 20 руб.\n";
  std::cout << "Расходы на ремонт машины: 20 руб.\n";
  std::cout << "==================================\n";
  std::cout << "Итого доход: 15 руб.\n";

}