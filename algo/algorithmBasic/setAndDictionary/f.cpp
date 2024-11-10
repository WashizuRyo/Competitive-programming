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

  int size = a.size();

  set<int> ans;

  rep(i, n) { ans.insert(a[i]); }

  cout << size - ans.size() << endl;
}