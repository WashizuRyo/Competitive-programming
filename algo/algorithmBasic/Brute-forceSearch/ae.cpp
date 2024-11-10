#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

bool checkKaibun(string s) {
  int left = 0, right = s.size() - 1;
  while (left < right) {
    if (s[left] == s[right]) {
      left++;
      right--;
    } else
      return false;
  }

  return true;
}

int main() {
  int l, r;
  cin >> l >> r;

  int ans = 0;
  for (int i = l; i <= r; i++) {
    string s = to_string(i);
    int left = 0, right = s.size() - 1;
    if (checkKaibun(s))
      ans++;
    else
      continue;
  }

  cout << ans << endl;
}