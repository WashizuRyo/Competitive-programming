#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), ans;
  rep(i, n) cin >> a[i];
  int count = 0;
  rep(i, n) {
    ans.push_back(a[i]);
    while (ans.size() >= 2 && ans[ans.size() - 2] == ans[ans.size() - 1]) {
      int b = ans.back() + 1;
      ans.pop_back();
      ans.pop_back();
      ans.push_back(b);
    }
  }

  cout << ans.size() << endl;
}