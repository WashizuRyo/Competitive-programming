#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> a(k);
  vector<int> l(q);
  rep(i, k) cin >> a[i];
  rep(i, q) cin >> l[i];
  rep(i, q) {
    int idx = l[i] - 1;  // マーカー番号に対応するインデックス
    // マーカーが最後の位置にいない、かつ次の位置に他のマーカーがいない場合
    if (a[idx] < n - 1 && (idx == k - 1 || a[idx + 1] > a[idx] + 1)) {
      a[idx]++;
    }
  }

  rep(i, k) { cout << a[i] << " "; }
  cout << endl;
}
