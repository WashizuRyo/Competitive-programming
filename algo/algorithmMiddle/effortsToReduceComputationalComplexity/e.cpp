#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), s(n + 1, 0);
  rep(i, n) {
    cin >> a[i];
    s[i + 1] = s[i] + a[i];
  }
  int q;
  cin >> q;
  rep(i, q) {
    int k;
    cin >> k;
    cout << s[k] << endl;
  }
}