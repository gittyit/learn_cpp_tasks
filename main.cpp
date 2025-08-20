#include <iostream>

int main() {

  std::string stop1 = "Улица программистов", stop2 = "Проспект алгоритмов",
  stop3 = "Улица космонавтов", stop4 = "Проспект летчиков";
  int passNum = 0, passengersIn = 0, passengersOut = 0,
  totalPassNum = 0, grossIncome = 0, netIncome = 0, ticketPrice = 20,
  salary, fuel, taxes, deprecation;

  std::cout << "Программа \"Симулятор маршрутки\".\n";
  std::cout << "========================================================\n\n";
  
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
  totalPassNum += passengersIn;

  std::cout << "В салоне пассажиров: " << passNum << "\n\n";
  std::cout << "Отправляемся на остановку «" << stop2 << "». \n";
  std::cout << "-----------Едем---------\n";
  std::cout << "Прибываем на остановку «" << stop2 << "».\n";
  std::cout << "В салоне пассажиров: " << passNum << "\n\n";
  std::cout << "Сколько пассажиров вышло на остановке? "; std::cin >> passengersOut;
  std::cout << "Сколько пассажиров зашло на остановке? "; std::cin >> passengersIn;
  std::cout << "\n";
  passNum = passNum + passengersIn - passengersOut;
  totalPassNum += passengersIn;

  std::cout << "В салоне пассажиров: " << passNum << "\n\n";
  std::cout << "Отправляемся на остановку «" << stop3 << "». \n";
  std::cout << "-----------Едем---------\n";
  std::cout << "Прибываем на остановку «" << stop3 << "».\n";
  std::cout << "В салоне пассажиров: " << passNum << "\n\n";
  std::cout << "Сколько пассажиров вышло на остановке? "; std::cin >> passengersOut;
  std::cout << "Сколько пассажиров зашло на остановке? "; std::cin >> passengersIn;
  std::cout << "\n";
  passNum = passNum + passengersIn - passengersOut;
  totalPassNum += passengersIn;

  std::cout << "В салоне пассажиров: " << passNum << "\n\n";
  std::cout << "Отправляемся на остановку «" << stop4 << "». \n";
  std::cout << "-----------Едем---------\n";
  std::cout << "Прибываем на остановку «" << stop4 << "».\n";
  std::cout << "В салоне пассажиров: " << passNum << "\n\n";
  std::cout << "Сколько пассажиров вышло на остановке? "; std::cin >> passengersOut;
  std::cout << "Сколько пассажиров зашло на остановке? "; std::cin >> passengersIn;
  std::cout << "\n";
  passNum = passNum + passengersIn - passengersOut;
  totalPassNum += passengersIn;
  
  std::cout << "В салоне пассажиров: " << passNum << "\n";
  std::cout << "-----------Конец маршрута---------\n";

  grossIncome = totalPassNum * ticketPrice;
  salary = grossIncome * 0.25;
  fuel = grossIncome * 0.2;
  taxes = grossIncome * 0.2;
  deprecation = grossIncome * 0.2;
  netIncome = grossIncome - salary - fuel - taxes - deprecation;
  
  std::cout << "Всего заработали за последнюю поездку: " << grossIncome << " руб.\n";
  std::cout << "Зарплата водителя: " << salary << " руб.\n";
  std::cout << "Расходы на топливо: " << fuel << " руб.\n";
  std::cout << "Налоги: " << taxes << " руб.\n";
  std::cout << "Расходы на ремонт машины: " << deprecation << " руб.\n";
  std::cout << "=========================\n";
  std::cout << "Итого доход: " << netIncome << " руб.\n";

}