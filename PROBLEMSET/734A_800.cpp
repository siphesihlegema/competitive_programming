#include <iostream>
#include <string>

int main() {
  long n{};
  std::cin >> n;
  std::string s{};
  std::cin >> s;

  int Anton{};
  int Danik{};

  for (char c : s) {
    if (c == 'A') {
      Anton++;
    } else {
      Danik++;
    }
  }
  if (Anton > Danik) {
    std::cout << "Anton" << "\n";
  } else if (Anton < Danik) {
    std::cout << "Danik" << "\n";
  } else {
    std::cout << "Friendship";
  }
  return 0;
}
