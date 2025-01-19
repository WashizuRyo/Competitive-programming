#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n = 1001001;
  vector<int> array(n);

  // array[0] ~ array[19]にインデックスに2を掛けた値を代入
  // array[0] = 0, array[1] = 2, array[2] = 4, ... , array[18] = 36, array[19] = 38
  for (int i = 0; i < n; i++) {
    array[i] = i * 2;
  }

  // 見つけたい値
  int target = 50000;

  for (int i = 0; i < n; i++) {
    if (array[i] == target) {
      cout << "target is found" << endl;
      cout << "count: " << i + 1 << endl;
      return 0;
    }
  }

  cout << "target is not found" << endl;
  return 0;
}