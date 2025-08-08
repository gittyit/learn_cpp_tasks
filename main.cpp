#include <iostream>

// 2.5.2
int main() {
  int totalAmount = 4000000, entries = 10, flats = 40,
  costPerFlat;

  costPerFlat = totalAmount / ( entries * flats );

  std::cout << "Приветствуем вас в калькуляторе квартплаты!\n";
  std::cout << "Введите сумму, указанную в квитанции: " << totalAmount << " \n";
  std::cout << "Сколько подъездов в вашем доме? " << entries << "\n";
  std::cout << "Сколько квартир в каждом подъезде? " << flats << "\n";
  std::cout << "----Считаем-----\n";
  std::cout << "Каждая квартира должна платить по " << costPerFlat << " руб.\n";
}
