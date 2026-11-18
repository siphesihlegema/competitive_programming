#include <iostream>
#include <vector>

int main() {
  int t{};
  int l{};

  std::cin >> t;

  for (int i{}; i != t; i++) {
    std::cin >> l;
    std::vector<int> s{l};

    for (int &x : s) {
      std::cin >> x;
    }
  }
}
