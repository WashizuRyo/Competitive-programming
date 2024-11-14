#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, q;
  cin >> n;
  vector<int> a(n);

  rep(i, n) cin >> a[i];
  cin >> q;
  rep(i, q) {
    int type;
    cin >> type;
    if (type == 0) {
      int k;
      cin >> k;
      if (0 <= k && k < a.size()) {
        cout << a[k] << endl;
      } else {
        cout << "Error" << endl;
      }
    } else {
      int v;
      cin >> v;
      a.push_back(v);
    }
  }
}