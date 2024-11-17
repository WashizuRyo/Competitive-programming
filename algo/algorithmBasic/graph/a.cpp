#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  vector<string> s(n);
  bool afriend = false, bfriend = false;
  rep(i, n) cin >> s[i];
  if (s[a][b] == 'o' && s[b][a] == 'o') {
    cout << "Yes" << endl;
  } else
    cout << "No" << endl;
}