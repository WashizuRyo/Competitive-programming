#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);

  rep(i, n) { cin >> a[i]; }

  cout << a[k] << endl;
  cout << a[n - k - 1] << endl;
}