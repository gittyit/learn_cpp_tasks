#include <iostream>

int main() {

  int productCost;
  int deliveryCost;
  int discount;

  int price = productCost + deliveryCost - discount;

  std::cout << "Введите данные для расчета.\n";
  std::cout << "Стоимость товара: ";
  std::cin >> productCost;
  std::cout << "Cтоимость доставки: ";
  std::cin >> deliveryCost;
  std::cout << "Скидка: ";
  std::cin >> discount;

  price = productCost + deliveryCost - discount;
  std::cout << "\n==== РАСЧЕТ ====\n";
  std::cout << "Стоимость товара: " << productCost << "\n";
  std::cout << "Cтоимость доставки: " << deliveryCost << "\n";
  std::cout << "Скидка: " << discount << "\n";
  std::cout << "---------\n";
  std::cout << "Итого: " << price << "\n";

}