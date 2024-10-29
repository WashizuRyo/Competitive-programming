#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, r, c;
  cin >> n >> r >> c;
  vector<string> s(n);
  rep(i, n) { cin >> s[i]; }

  if (s[r][c] == '.') {
    cout << "white" << endl;
  } else {
    cout << "black" << endl;
  }
}