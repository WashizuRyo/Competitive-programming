#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> w(n);
  vector<int> sorted_w(n);
  rep(i, n) {

    cin >> w[i];
    sorted_w[i] = w[i];
  }

  sort(sorted_w.begin(), sorted_w.end());

  rep(i, n) {
    int ok = -1;
    int ng = n;
    while (ng - ok > 1) {
      int mid = (ok + ng) / 2;
      if (sorted_w[mid] < w[i]) {
        ok = mid;
      } else {
        ng = mid;
      }
    }

    cout << ok + 1 << endl;
  }
}