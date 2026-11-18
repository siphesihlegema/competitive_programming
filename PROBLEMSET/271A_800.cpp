#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;

int main() {
  int x;
  cin >> x;

  unordered_set<int> nums;

  while (x > 0) {
    int num = x % 10;
    nums.insert(x);
    x /= 10;
  }
}
