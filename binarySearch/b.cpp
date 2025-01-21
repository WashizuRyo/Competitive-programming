#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  ll n = 1001001001;
  vector<ll> array(n);

  // array[0] ~ array[19]にインデックスに2を掛けた値を代入
  // array[0] = 0, array[1] = 2, array[2] = 4, ... , array[18] = 36, array[19] = 38
  for (ll i = 0; i < n; i++) {
    array[i] = i * 2;
  }
  // array[0] = 3;
  // array[1] = 10;
  // array[2] = 20;
  // array[3] = 30;
  // array[4] = 45;
  // array[5] = 50;
  // array[6] = 87;
  // array[7] = 90;
  // array[8] = 100;
  // array[9] = 200;
  // array[10] = 300;
  // array[11] = 400;

  // 見つけたい値
  ll target = 5000000;

  ll left = 0, right = n - 1, count = 0;
  while (right - left != 0) {
    count++;
    ll mid = (left + right) / 2;
    if (array[mid] >= target) {
      right = mid;
    } else {
      left = mid + 1;
    }
  }

  cout << "count: " << count << endl;
  cout << "target index: " << right << endl;
  cout << "target value: " << array[right] << endl;
}