#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;

    vector<bool> printed(n + 1, false);
    stack<int> mem;

    for (int i = 0; i < n; ++i) {
      int doc = i + 1;
      if (s[i] == '1') {
        mem.push(doc);
      } else if (s[i] == '2') {
        if (!mem.empty()) {
          printed[mem.top()] = true;
          mem.pop();
        } else {
          printed[doc] = true;
        }
      } else if (s[i] == '3') {
        printed[doc] = true;
      }
    }

    vector<int> unprinted;
    for (int doc = 1; doc <= n; ++doc) {
      if (!printed[doc]) {
        unprinted.push_back(doc);
      }
    }

    cout << unprinted.size() << '\n';
    for (int i = 0; i < static_cast<int>(unprinted.size()); ++i) {
      if (i > 0)
        cout << ' ';
      cout << unprinted[i];
    }
    cout << '\n';
  }

  return 0;
}
