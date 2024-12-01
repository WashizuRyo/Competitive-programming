#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<P> time(n);

  rep(i, n) {
    int s, t;
    cin >> s >> t;
    time[i] = {s, t};
  }

  sort(time.begin(), time.end(), [](const P &a, const P &b) {
    return a.second < b.second;  // 終了時刻でソート
  });

  int ans = 0;
  rep(i, n - 1) {
    if (time[i + 1].first >= time[i].second) {
      ans++;
    }
  }

  cout << ans << endl;
}