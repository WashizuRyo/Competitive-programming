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
  bool swapped = true;
  while (swapped) {
    swapped = false;
    rep(i, n - 1) {
      if (a[i] > a[i + 1]) {
        int temp = a[i + 1];
        a[i + 1] = a[i];
        a[i] = temp;
        swapped = true;
      }
    }
    if (swapped) {
      rep(j, n) cout << a[j] << " ";
    }
    cout << endl;
  }
}