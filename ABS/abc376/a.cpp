#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, c;
  cin >> n >> c;
  vector<int> t(n);
  int count = 1;
  rep(i, n) cin >> t[i];
  int d = t[0];
  for (int i = 1; i < n; i++) {
    if (t[i] - d >= c) {
      count++;
      d = t[i];
    }
  }

  cout << count << endl;
}