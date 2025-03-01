#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  set<pair<int, int>> ans;
  rep(i, n) {
    cin >> a[i];
    ans.insert({a[i], i});
  }

  rep(i, n) {
    // auto it = ans.lower_bound(a[i]);
  }
}