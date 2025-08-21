#include <iostream>
#include <cpr/cpr.h>
//test
int main() {
  int totalAmount = 0;

  cpr::Response r = cpr::Get(cpr::Url("https://httpbin.org/get"));
  std::cout << "text:\n" << r.text;
  if (r.status_code == 200) {
    std::cout << "done\n";
  }
}
