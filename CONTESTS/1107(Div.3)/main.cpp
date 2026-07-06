#include <bits/stdc++.h>

using namespace std;

int main() {
  int t{};
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    int y;
    cin >> y;

    if (x % y == 0 && (y != 1 || x == 1)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}
