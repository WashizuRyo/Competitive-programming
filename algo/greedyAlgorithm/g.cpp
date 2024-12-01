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

  vector<bool> visited(n, false);

  int groups = 0;

  sort(a.begin(), a.end());

  rep(i, n) {
    if (visited[i] == true) continue;

    int m = a[i];
    groups++;

    for (int j = i; j < n; j++) {
      if (a[j] % m == 0) visited[j] = true;
    }
  }

  cout << groups << endl;
}