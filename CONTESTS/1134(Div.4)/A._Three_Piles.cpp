// Problem: A. Three Piles
// URL: https://codeforces.com/contest/2290/problem/A

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define all(x) (x).begin(), (x).end()
#define sz(x) static_cast<int>((x).size())
#define pb push_back

void solve() {
  int a, b, c;
  vector<int> idk;
  cin >> a >> b >> c;
  idk.pb(a);
  idk.pb(b);
  idk.pb(c);

  sort(all(idk));

  if (idk[1] - idk[0] == 1 && idk[2] - idk[1] == 1) {
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
