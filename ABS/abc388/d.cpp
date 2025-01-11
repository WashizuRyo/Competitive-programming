#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) { cin >> a[i]; }

  rep(i, n) {
    if (a[i] - (n - 1)) {
      a[i] = a[i] - (n - 1);
    }
  }
  rep(i, n) { cout << a[i] << " "; }
  cout << endl;
}