// Problem: B. Stubborn Pen
// URL: https://codeforces.com/contest/2290/problem/B

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define all(x) (x).begin(), (x).end()
#define sz(x) static_cast<int>((x).size())
#define pb push_back

void solve() {
  int n;
  string s;
  cin >> n >> s;
  s = "B" + s;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += s[i] == s[i - 1];
  }
  cout << ans << endl;
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
