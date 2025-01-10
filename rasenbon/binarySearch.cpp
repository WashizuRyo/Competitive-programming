#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, q;

  cin >> n;
  vector<int> s(n);
  rep(i, n) { cin >> s[i]; }

  cin >> q;
  vector<int> t(n);
  rep(i, q) { cin >> t[i]; }

  int left = 0, right = n, ans = 0;
  rep(j, q) {
    while (right - left != 0) {
      int mid = (right + left) / 2;
      if (s[mid] > t[j]) {
        left = mid;
      } else {
        right = left;
      }
    }
    if (right == t[j]) ans++;
  }

  cout << ans << endl;
}