#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  ll n = 10010010010;
  vector<ll> array(n);

  // array[0] ~ array[19]にインデックスに2を掛けた値を代入
  // array[0] = 0, array[1] = 2, array[2] = 4, ... , array[18] = 36, array[19] = 38
  for (ll i = 0; i < n; i++) {
    array[i] = i * 2;
  }

  // 見つけたい値
  ll target = 50000000, count = 0;

  for (ll i = 0; i < n; i++) {
    if (array[i] == target) {
      cout << "count: " << i + 1 << endl;
      cout << "target index: " << i << endl;
      cout << "target value: " << array[i] << endl;
      return 0;
    }
  }

  cout << "target is not found" << endl;
  return 0;
}