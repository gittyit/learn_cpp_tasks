#include <iostream>
#include <string.h>

// 2.5.3 add
int main() {
  std::string restaurantName = "Крылышки и ножки";
  int shiftDuration = 480,
  clientOrderDuration = 2, cashierOrderDuration = 4, clientsServed;

  // стоимость товара
  clientsServed = 480 / ( clientOrderDuration + cashierOrderDuration );
  
  std::cout << "Ресторан быстрого питания «" << restaurantName << "»." << "\n";
  std::cout << "-----------------------------------------------\n";
  std::cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\n";
  std::cout << "Введите длительность смены в минутах: 480\n";
  std::cout << "Сколько минут клиент делает заказ? 2\n";
  std::cout << "Сколько минут кассир собирает заказ? 4\n"; 
  std::cout << "-----Считаем-----\n";
  std::cout << "За смену длиной 480 минут кассир успеет обслужить 80 клиентов.\n";
}