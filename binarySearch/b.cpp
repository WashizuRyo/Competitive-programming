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
  int target = 10;

  int left = 0, right = n - 1, count = 0;
  while (right - left != 0) {
    count++;
    int mid = (left + right) / 2;
    if (array[mid] >= target) {
      right = mid;
    } else {
      left = mid + 1;
    }
  }

  cout << count << endl;
  cout << right << left << endl;
}