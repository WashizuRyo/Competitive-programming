#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, v;
  cin >> n >> v;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  rep(i, n) {
    if (a[i] == v) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}