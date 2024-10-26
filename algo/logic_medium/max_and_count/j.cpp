#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> a(n), ansV(10, 0);
  rep(i, n) cin >> a[i];
  rep(i, n) {
    int range = a[i] / 10;
    if (range == 0) {
      ansV[0]++;
    } else {
      ansV[range]++;
    }
  }

  rep(i, 10) { cout << ansV[i] << endl; }
}