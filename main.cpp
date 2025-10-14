#include <iostream>

int main() {

  int a, b, c;
  int m, n, k;
  bool ok = false;

  std::cout << "Усложнение задачи про кирпич.\n\n";
  std::cout << "Введите размер первой коробки (A×B×C): ";
  std::cin >> a >> b >> c;
  std::cout << "Введите размер второй коробки (M×N×K): ";
  std::cin >> m >> n >> k;

  
  // X-Y-Z:
  // ------
  // 1. CxB-A - NxK-M
  // 2. CxB-A - MxK-N
  // 3. CxB-A - MxN-K
  // 4. AxC-B - NxK-M
  // 5. AxC-B - MxK-N
  // 6. AxC-B - MxN-K
  // 7. AxB-C - NxK-M
  // 8. AxB-C - MxK-N
  // 9. AxB-C - MxN-K

  std::cout << "\nВарианты:\n";

  // 1. CxB-A - NxK-M
  if (c <= n && b <= k && a <= m ) {
    std::cout << "\n1.   C×B×A = " << c << "x" << b << "x" << a;
    std::cout << "\n     N×K×M = " << n << "x" << k << "x" << m << std::endl;
    ok = true;
  }
  // 2. CxB-A - MxK-N
  if (c <= m && b <= k && a <= n ) {
    std::cout << "\n2.   C×B×A = " << c << "x" << b << "x" << a;
    std::cout << "\n     M×K×N = " << m << "x" << k << "x" << n << std::endl;
    ok = true;
  }
  // 3. CxB-A - MxN-K
  if (c <= m && b <= n && a <= k ) {
    std::cout << "\n3.   C×B×A = " << c << "x" << b << "x" << a;
    std::cout << "\n     M×N×K = " << m << "x" << n << "x" << k << std::endl;
    ok = true;
  }
  // 4. AxC-B - NxK-M
  if (a <= n && c <= k && b <= m ) {
    std::cout << "\n4.   A×C×B = " << a << "x" << c << "x" << b;
    std::cout << "\n     N×K×M = " << n << "x" << k << "x" << m << std::endl;
    ok = true;
  }
  // 5. AxC-B - MxK-N
  if (a <= m && c <= k && b <= n ) {
    std::cout << "\n5.   A×C×B = " << a << "x" << c << "x" << b;
    std::cout << "\n     M×K×N = " << m << "x" << k << "x" << n << std::endl;
    ok = true;
  }
  // 6. AxC-B - MxN-K
  if (a <= m && c <= n && b <= k ) {
    std::cout << "\n6.   A×C×B = " << a << "x" << c << "x" << b;
    std::cout << "\n     M×N×K = " << m << "x" << n << "x" << k << std::endl;
    ok = true;
  }
  // 7. AxB-C - NxK-M
  if (a <= n && b <= k && c <= m ) {
    std::cout << "\n7.   A×B×C = " << a << "x" << b << "x" << c;
    std::cout << "\n     N×K×M = " << n << "x" << k << "x" << m << std::endl;
    ok = true;
  }
  // 8. AxB-C - MxK-N
  if (a <= m && b <= k && c <= n ) {
    std::cout << "\n8.   A×B×C = " << a << "x" << b << "x" << c;
    std::cout << "\n     M×K×N = " << m << "x" << k << "x" << n << std::endl;
    ok = true;
  }
  // 9. AxB-C - MxN-K
  if (a <= m && b <= n && c <= k ) {
    std::cout << "\n9.   A×B×C = " << a << "x" << b << "x" << c;
    std::cout << "\n     M×N×K = " << m << "x" << n << "x" << k << std::endl;
    ok = true;
  }
  

  if (ok) std::cout << "\n\nПервая коробка помещается во вторую.";
  else {
    std::cout << "нет\n";
    std::cout << "\nПервая коробка не помещается во вторую.";
  }


  // Старая задача.
  
  // int x, y;
  // 
  // if (a <= x && b <= y || a <= y && b <= x) {
  //   std::cout << "Можно";
  // } else if (b <= x && c <= y || b <= y && c <= x) {
  //   std::cout << "Можно";
  // } else if (a <= x && c <= y || a <= y && c <= x) {
  //   std::cout << "Можно";
  // } else {
  //   std::cout << "Нельзя";
  // }

  std::cout << std::endl << std::endl;

}