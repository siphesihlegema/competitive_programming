#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;

  std::string t;
  std::cin >> t;

  std::string rv;

  for (std::string::reverse_iterator i = s.rbegin(); i != s.rend(); i++) {
    rv.push_back(*i);
  }

  if (t == rv) {
    std::cout << "YES" << "\n";
  } else {
    std::cout << "NO" << "\n";
  }

  return 0;
}
