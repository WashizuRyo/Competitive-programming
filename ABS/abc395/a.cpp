#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  rep(i, n) cin >> a[i];

  for (int i = 0; i < n - 1; i++) {
    if (a[i] >= a[i + 1]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}