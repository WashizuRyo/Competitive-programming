#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  string s, t;
  cin >> n;
  cin >> s >> t;

  int cnt = 0;

  rep(i, n) {
    if (s[i] != t[i]) cnt++;
  }
  
  cout << cnt << endl;
}