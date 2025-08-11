#include <iostream>

int main() {

  std::string user, password;

  std::cout << "Введите логин: ";
  std::cin >> user;
  std::cout << "Введите пароль: ";
  std::cin >> password;
  
  std::cout << "-----\n";
  std::cout << user << ", вы успешно зашли!";

}