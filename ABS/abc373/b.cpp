#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int cnt = 0;
  vector<int> ss;
  rep(i, s.size()) {
    rep(j, s.size()) {
      if (s[j] == static_cast<char>(65 + i)) {
        ss.push_back(j);
      }
    }
  }
  ss[26] = ss[25];
  rep(i, s.size()) {
    int temp = abs(ss[i + 1] - ss[i]);
    cnt += temp;
  }
  cout << cnt << endl;
}