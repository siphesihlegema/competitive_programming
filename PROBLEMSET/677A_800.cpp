#include <iostream>

int main() {
  int n{};
  long h{};
  std::cin >> n;
  std::cin >> h;

  int a{0};

  int p{};
  int w{};

  for (int i = 0; i < n; i++) {
    std::cin >> p;
    if (p <= h) {
      w++;
    } else {
      w += 2;
    }
  }
  std::cout << w << "\n";
}
