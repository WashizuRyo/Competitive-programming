#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), w(n), maxWeight(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> w[i];

  int ans = 0, sumWeight = 0;
  rep(i, n) { sumWeight += w[i]; }
  rep(i, n) {
    a[i]--;
    maxWeight[a[i]] = max(maxWeight[a[i]], w[i]);
  }

  const int sumMaxWeight = accumulate(maxWeight.begin(), maxWeight.end(), 0);
  cout << sumWeight - sumMaxWeight << endl;
}