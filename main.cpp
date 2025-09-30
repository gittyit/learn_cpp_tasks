#include <iostream>

int main() {

  int airSpeed, altitude;

  std::cout << "Полёт нормальный!\n\n";
  std::cout << "Введите скорость самолёта: ";
  std::cin >> airSpeed;
  std::cout << "Введите высоту: ";
  std::cin >> altitude;

  std::cout << std::endl;
  
  if (airSpeed <= 0 || altitude <= 0) {
    if (airSpeed <= 0)
      std::cout << "неверный параметр <скорость>: " << airSpeed << std::endl;
    if (altitude <= 0)
      std::cout << "неверный параметр <высота>: " << altitude << std::endl;
    return 0;
  }
  else if ((airSpeed > 750 && airSpeed < 850) &&
     (altitude > 9000 && altitude < 9500))
     std::cout << "Эшелон правильный.";
  else std::cout << "Эшелон неверный.";

  std::cout << std::endl << std::endl;

}