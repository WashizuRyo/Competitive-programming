#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);

  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int index = 0;
  rep(i, m) {
    if (b[i] >= a[index]) {
      index++;
    }
    if (index == a.size()) break;
  }

  cout << index << endl;
}