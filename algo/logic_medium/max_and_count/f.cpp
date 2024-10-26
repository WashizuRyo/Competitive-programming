#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  vector<int> ans;
  rep(i, n) {
    if (b[i] <= m) {
      ans.push_back(a[i]);
    }
  }

  int max = 0;
  rep(i, ans.size()) {
    if (max < ans[i]) {
      max = ans[i];
    }
  }

  cout << max << endl;
}