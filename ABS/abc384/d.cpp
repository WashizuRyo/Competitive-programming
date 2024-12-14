#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

#include <iostream>
#include <vector>
using namespace std;

bool my_compare(pair<int, string> a, pair<int, string> b) {
  // 基本はfirstで比較
  if (a.first != b.first) {
    // return a.first < b.first; // 昇順
    return a.first > b.first;  // 降順
  }

  // それ以外はsecondで比較
  if (a.second != b.second) {
    return a.second < b.second;
  } else {
    // どちらも同じ
    return true;
  }
}

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  vector<pair<int, char>> arr = {
      {a, 'A'},
      {b, 'B'},
      {c, 'C'},
      {d, 'D'},
      {e, 'E'}
  };
  int n = arr.size();

  // 2^n 通りの部分集合を列挙
  vector<pair<int, string>> ans;
  for (int bit = 0; bit < (1 << n); bit++) {  // 0 から 2^n-1 まで
    string subset;
    int sum = 0;

    for (int i = 0; i < n; i++) {
      // ビットが立っている部分の要素を選ぶ
      if (bit & (1 << i)) {
        sum += arr[i].first;
        subset.push_back(arr[i].second);
      }
    }
    if (sum == 0) continue;
    ans.push_back({sum, subset});
  }

  sort(ans.begin(), ans.end(), my_compare);
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i].second << endl;
  }
}