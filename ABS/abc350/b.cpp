#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, q;
  cin >> n >> q;
  vector<bool> teeth(n, true);
  rep(i, q) {
    int t;
    cin >> t;
    t--;
    teeth[t] = !teeth[t];
  }
  int cnt = 0;
  rep(i, n) {
    if (teeth[i] == true) {
      cnt++;
    }
  }
  cout << cnt << endl;
}