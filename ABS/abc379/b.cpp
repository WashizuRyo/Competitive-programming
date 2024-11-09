#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int ans = 0, count = 0;
  rep(i, n) {
    if (s[i] == 'O')
      count++;
    else
      count = 0;
    if (count == k) {

      ans++;
      count = 0;
    }
  }

  cout << ans << endl;
}