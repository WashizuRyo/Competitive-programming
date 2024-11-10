#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  map<int, int> ans;

  rep(i, n) {
    int nn;
    cin >> nn;
    if (ans.count(nn) == 0) {
      ans.emplace(nn, 1);
    } else {
      ans[nn]++;
    }
  }

  int ansv = 0;
  for (auto a : ans) {
    if (a.first < a.second) {
      while (a.first != a.second) {
        a.second--;
        ansv++;
      }
    } else if (a.first == a.second) {
      continue;
    } else {
      ansv += a.second;
      // ans.erase(a.first);
    }
  }

  cout << ansv << endl;
}