#include <iostream>

int main() {
  long long num{};
  int lucky{};

  std::cin >> num;

  while (num > 0) {
    int value = num % 10;
    num /= 10;
    if (value == 4 || value == 7) {
      lucky++;
    }
  }

  if (lucky == 4 || lucky == 7) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }

  std::cout << "\n";
  return 0;
}
