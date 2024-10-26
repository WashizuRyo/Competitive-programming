#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s1, s2, s3, s4, s5, s6, s7, s8;
  cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;
  int ans = 0;

  vector<string> S(9);
  S.push_back(s1);
  S.push_back(s2);
  S.push_back(s3);
  S.push_back(s4);
  S.push_back(s5);
  S.push_back(s6);
  S.push_back(s7);
  S.push_back(s8);

  vector<bool> height(9, false), width(9, false);

  rep(i, S.size()) {
    if (S[i].find("#") != std::string::npos) height[i] = true;
  }

  rep(i, S.size()) {
    rep(j, S.size()) {
      if (S[i][j] == '#') {
        width[j] = true;
      }
    }
  }

  rep(i, S.size()) {
    rep(j, S.size()) {
      if (S[i][j] == '.' && height[i] == false && width[j] == false) {
        ans++;
      }
    }
  }

  cout << ans << endl;
}