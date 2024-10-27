#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> d(m);
  vector<int> schedule(n, true);
  rep(i, m) {
    cin >> d[i];
    schedule[d[i]] = false;
  };

  int ans = 0;
  rep(i, n) {
    if (schedule[i] == true) {
      ans++;
    } else {
      ans = 0;
    }
    if (ans >= k) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}