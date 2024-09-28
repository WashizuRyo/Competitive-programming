#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, cnt = 0;
  cin >> n;
  vector<int> d(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> d[i];
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= d[i]; j++) {
      string s = to_string(i) + to_string(j);
      sort(s.begin(), s.end());
      if (s[0] == s[s.size() - 1]) cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}