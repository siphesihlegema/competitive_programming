// Problem: A. Beautiful Year
// URL: https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>

#include <string>
#include <unordered_set>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define all(x) (x).begin(), (x).end()
#define sz(x) static_cast<int>((x).size())
#define pb push_back

void solve() {
  int y;
  cin >> y;

  while (true) {
    ++y;

    int temp = y;
    int yLength = to_string(y).length();
    unordered_set<int> digits;

    while (temp > 0) {
      digits.insert(temp % 10);
      temp /= 10;
    }

    if (yLength == (int)digits.size()) {
      cout << y << "\n";
      return;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
