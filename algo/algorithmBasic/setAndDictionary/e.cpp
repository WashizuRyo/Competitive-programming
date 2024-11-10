#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  rep(i, n) { cin >> a[i]; }
  a[n] = 0;
  set<int> ans;
  for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < a.size(); j++) {
      for (int k = 0; k < a.size(); k++) {
        ans.insert(a[i] + a[j] + a[k]);
      }
    }
  }

  cout << ans.size() << endl;
}
