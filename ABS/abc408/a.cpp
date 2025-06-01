#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  float s;
  cin >> n >> s;
  vector<int> t(n);
  rep(i, n) cin >> t[i];

  float cnt = 0;
  rep(i, n) {
    if (i == 0)
      cnt = t[i];
    else
      cnt += t[i] - t[i - 1];

    if (cnt >= s + 0.5) {
      cout << "No" << endl;
      return 0;
    }

    cnt = 0;
  }

  cout << "Yes" << endl;
}