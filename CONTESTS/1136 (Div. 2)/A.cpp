#include <algorithm>
#include <iostream>

#define ll long long

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    ll x;
    cin >> x;

    ll ans = x;

    for (ll i = 0; i <= x; ++i) {
      ll lo = 1, hi = x, best_a = x;
      while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;
        long long dmg;
        if (mid <= i + 1) {
          dmg = mid * (i + 1) - mid * (mid - 1) / 2;
        } else {
          dmg = (i + 1) * (i + 2) / 2 + (mid - i - 1);
        }

        if (dmg >= x) {
          best_a = mid;
          hi = mid - 1;
        } else {
          lo = mid + 1;
        }
      }

      ans = min(ans, i + best_a);
    }

    cout << ans << '\n';
  }

  return 0;
}
