#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  map<int, int> days;
  rep(i, 30) { days[i] = 0; }
  rep(i, n) {
    int k;
    cin >> k;
    rep(j, k) {
      int d;
      cin >> d;
      days[d - 1]++;
    }
  }

  rep(i, 30) {
    if (days[i] >= n) {
      cout << i + 1 << endl;
    }
  }
}