#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> d(q), schedule(n, -1);
  rep(i, q) cin >> d[i];

  rep(i, q) {
    if (schedule[d[i]] == -1) {
      schedule[d[i]] = i;
    }
  }

  rep(i, n) { cout << schedule[i] << endl; }
}