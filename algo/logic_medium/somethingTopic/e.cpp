#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  int d = 1;
  vector<int> ansS(3);
  for (int i = s.size() - 1; i >= 0; i--) {
    int newCharCode = 0;
    if ((s[i]) >= 'A' && s[i] <= 'F') {
      newCharCode = s[i] - 55;
    } else {
      newCharCode = int(s[i] - '0');
    }

    // cout << newCharCode << endl;

    ans += d * newCharCode;
    if (i % 2 == 0) {
      // cout << ans << endl;
      ansS.push_back(ans);
      ans = 0;
      d = 1;
    } else {
      d *= 16;
    }
  }

  for (int i = ansS.size() - 1; i >= ansS.size() - 3; i--) {
    cout << ansS[i] << " ";
  }

  cout << endl;
}