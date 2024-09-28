#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, x, cnt = 0;
  cin >> n >> x;
  vector<int> s(n);
  rep(i, n) {
    cin >> s[i];
    if (s[i] <= x) {
      cnt += s[i];
    }
  }
  cout << cnt << endl;
}