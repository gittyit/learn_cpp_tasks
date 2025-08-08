#include <iostream>

// 2.5.2
int main() {
  int totalAmount = 0, quantity = 10, price = 50, deliveryCost = 30,
  discount = 40, goodsCost;

  goodsCost = quantity * price;
  totalAmount = goodsCost + deliveryCost - discount;

  std::cout << "Калькулятор для расчёта стоимости товара.\n";
  std::cout << "Стоимость товара: " << goodsCost << "\n";
  std::cout << "Стоимость доставки: " << deliveryCost << "\n";
  std::cout << "Скидка: " << discount << "\n";
  std::cout << "=========================================\n";
  std::cout << "Полная стоимость товара: " << totalAmount;
}
