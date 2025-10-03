#include <iostream>

int main() {

  int amount, sum = 0;
  int m1 = 100, m2 = 200, m3 = 500, m4 = 1000,
      m5 = 2000, m6 = 5000;
  int mq1 = 10, mq2 = 5, mq3 = 2, mq4 = 5,
      mq5 = 2, mq6 = 2;

  std::cout << "Банкомат — 2.\n\n";
  std::cout << "Введите сумму: ";
  std::cin >> amount;

  if (amount <= 0 || amount > 150000 || amount % 100 ||
      amount > (m6*mq6 + m5*mq5 + m4*mq4 + m3*mq3 + m2*mq2 + m1*mq1)) {
    if (amount <= 0) std::cout << "Неверная сумма: " << amount;
    if (amount > 150000)
      std::cout << "\nСумма превышает лимит выдачи за один раз.";
    if (amount % 100)
      std::cout << "\nВыдать ровно " << amount << " рублей невозможно.";
    if (amount > (m6*mq6 + m5*mq5 + m4*mq4 + m3*mq3 + m2*mq2 + m1*mq1))
      std::cout << "\nВ банкомате не достаточно наличных.";
    std::cout << std::endl << std::endl;
    return 0;
  }
  else {
    std::cout << "\nВыдача наличных:\n";
    for(;mq6 > 0 && (amount - m6 >= 0);mq6--) {
      std::cout << m6 << " рублей.\n"; amount -= m6; sum += m6;
    }
    for(;mq5 > 0 && (amount - m5 >= 0);mq5--) {
      std::cout << m5 << " рублей.\n"; amount -= m5; sum += m5;
    }
    for(;mq4 > 0 && (amount - m4 >= 0);mq4--) {
      std::cout << m4 << " рублей.\n"; amount -= m4; sum += m4;
    }
    for(;mq3 > 0 && (amount - m3 >= 0);mq3--) {
      std::cout << m3 << " рублей.\n"; amount -= m3; sum += m3;
    }
    for(;mq2 > 0 && (amount - m2 >= 0);mq2--) {
      std::cout << m2 << " рублей.\n"; amount -= m2; sum += m2;
    }
    for(;mq1 > 0 && (amount - m1 >= 0);mq1--) {
      std::cout << m1 << " рублей.\n"; amount -= m1; sum += m1;
    }
    std::cout << "\nИтого: " << sum << " рублей.\n";
    std::cout << "\nГотово.\n";
  }

  std::cout << std::endl << std::endl;

}