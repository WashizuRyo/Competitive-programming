#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, Aans = -10000000000000, Bans = -10000000000000;
  cin >> n;
  vector<int> a(n), b(n), c;
  rep(i, n) {
    cin >> a[i];
    Aans = max(Aans, a[i]);
  }
  rep(i, n) {
    cin >> b[i];
    Bans = max(Bans, b[i]);
  }
  cout << Aans + Bans << endl;
}