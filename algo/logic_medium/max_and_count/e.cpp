#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> ans;
  int max = 0;
  rep(i, n) {
    if (max < a[i]) {
      int temp = max;
      max = a[i];
    }
  }

  rep(i, n) {
    if (max <= a[i]) {
      ans.push_back(i);
    }
  }

  rep(i, ans.size()) { cout << ans[i] << endl; }
}