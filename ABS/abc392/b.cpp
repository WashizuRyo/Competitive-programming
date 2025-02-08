#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);

  rep(i, m) cin >> a[i];
  vector<int> ans;
  int count = 0;
  for (int i = 1; i <= n; i++) {
    bool d = false;
    rep(j, m) {
      if (i == a[j]) {
        d = true;
        break;
      }
    }
    if (d == false) {
      count++;
      ans.push_back(i);
    }
  }

  cout << count << endl;
  for (int a : ans) {
    cout << a << " ";
  }
  cout << endl;
}