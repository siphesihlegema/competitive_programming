#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int t, a, b;

  cin >> t;

  while (t--) {
    cin >> a >> b;

    if (a <= b) {
      cout << (int)-1;
    } else {
      cout << min(b, a - b);
    }
  }
}
