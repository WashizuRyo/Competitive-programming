#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  cin >> k;
  int count = 0;
  rep(i, n) {
    if (a[i] >= k) count++;
  }

  cout << count << endl;
}