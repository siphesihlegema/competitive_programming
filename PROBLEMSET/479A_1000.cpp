#include <algorithm>
#include <iostream>

int main() {
  int a, b, c;

  if (std::cin >> a >> b >> c) {
    std::cout << std::max({a + b + c, a * b * c, (a + b) * c, a * (b + c)})
              << "\n";
  }

  return 0;
}
