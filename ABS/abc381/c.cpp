#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;

  int ans = 0;
  rep(i, n) {
    if (s[i] != '/') continue;
    int count = 0;
    while (true) {
      int left = i - (count + 1), right = i + (count + 1);
      if (left < 0 || left >= n) break;
      if (right < 0 || right >= n) break;
      if (s[left] != '1') break;
      if (s[right] != '2') break;
      count++;
    }

    ans = max(ans, 1 + count * 2);
  }

  cout << ans << endl;
}