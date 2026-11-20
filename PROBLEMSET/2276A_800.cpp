#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int t;
  int a;
  int b;
  cin >> t;

  while (t--) {
    cin >> a >> b;
    if (a <= b) {
      cout << (int)-1 << "\n";
    }

    cout << min(b, a - b) << "\n";
  }
}
