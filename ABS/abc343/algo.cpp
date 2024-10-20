#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  set<int> a;
  vector<bool> b(n, false);
  for (int i = 0; i < k; i++) {
    int c;
    cin >> c;
    a.insert(c);
  }

  // 休日を設定
  for (int i = 0; i < n; i++) {
    if (i % 7 == 0) {
      b[i] = true;
    }
  }

  // 祝日を設定
  for (int i = 0; i < n; i++) {
    if (a.count(i)) {
      b[i] = true;
    }
  }

  for (int i = 0; i < n; i++) {
    if (i % 7 == 0 && a.count(i)) {
      for (int j = i + 1; j < n; j++) {
        if (!b[j]) {
          b[j] = true;
          break;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (b[i]) cout << i << endl;
  }
}