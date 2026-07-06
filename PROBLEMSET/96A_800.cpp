#include <bits/stdc++.h>

using namespace std;

int main() {
  string players;
  cin >> players;

  string s;
  string x;

  for (char &p : players) {
    if (p == '0') {
      s.push_back(p);
      if (s.length() >= 7) {
        cout << "YES";
        break;
      }
    } else {
      s.clear();
    }

    if (p == '1') {
      x.push_back(p);
      if (x.length() >= 7) {
        cout << "YES";
        break;
      }
    } else {
      x.clear();
    }
  }
  if (s.length() >= 7 || x.length() >= 7) {
  } else {
    cout << "NO";
  }
}
