#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, q, ans = 0;
  cin >> n >> q;
  vector<int> count(n, 1);
  vector<int> hato(n);
  rep(i, n) { hato[i] = i; }
  rep(i, q) {
    int type, p, h;
    cin >> type;
    if (type == 1) {
      cin >> p >> h;
      p--, h--;

      count[h]++;
      if (count[h] == 2) {
        ans++;
      }

      count[hato[p]]--;
      if (count[hato[p]] == 1) {
        ans--;
      }

      hato[p] = h;
    } else {
      cout << ans << endl;
    }
  }
}