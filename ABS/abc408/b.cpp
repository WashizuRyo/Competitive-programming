#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  set<int> ans;

  rep(i, n) {
    int a;
    cin >> a;
    ans.insert(a);
  }

  cout << ans.size() << endl;
  for (int x : ans) {
    cout << x;
    if (x != *ans.rbegin()) cout << " ";
    else cout << endl;
  }
}