#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> live(n);
  vector<pair<int, vector<int>>> hato;
  vector<int> ans;
  rep(i, n) { hato.push_back({i, {i}}); }

  rep(i, q) {
    int type;
    cin >> type;
    if (type == 1) {
      int a, b;
      cin >> a >> b;
      a--, b--;
      live[a] = b;
      hato[a].second.erase(remove(hato[a].second.begin(), hato[a].second.end(), a), hato[a].second.end());
      hato[b].second.push_back(a);
    } else if (type == 2) {
      int a, b;
      cin >> a >> b;
      a--, b--;
      rep(i, hato[a].second.size()) { live[hato[a].second[i]] = b; }
      rep(i, hato[b].second.size()) { live[hato[b].second[i]] = a; }

      swap(hato[a].second, hato[b].second);
    } else {
      int a;
      cin >> a;
      a--;
      ans.push_back(live[a] + 1);
    }
  }

  rep(i, ans.size()) { cout << ans[i] << endl; }
}