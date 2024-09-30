#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, q, count = 0;
  cin >> n >> q;
  vector<int> x(n);
  vector<char> c(n);
  string s;
  cin >> s;
  string copyS = s;
  rep(i, q) { cin >> x[i] >> c[i]; }
  rep(i, n) {
    copyS[x[i] - 1] = c[i];
    cout << count << endl;
  }
}