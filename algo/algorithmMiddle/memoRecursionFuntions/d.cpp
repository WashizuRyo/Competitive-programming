#include <iostream>
#include <vector>
using namespace std;

// 再帰関数 f(n, l, r) の定義
vector<vector<int>> func(int n, int l, int r) {
  // l > r ならば、空の配列を返す
  if (l > r) {
    return {};
  }

  // n == 0 の場合、空の配列の配列を返す
  if (n == 0) {
    return {{}};
  }

  // 結果を格納する配列 ans
  vector<vector<int>> ans;

  // func(n-1, l, r) の結果を処理
  vector<vector<int>> left_result = func(n - 1, l, r);
  for (auto &arr : left_result) {
    arr.insert(arr.begin(), l);  // 各配列の先頭に l を追加
    ans.push_back(arr);
  }

  // func(n, l+1, r) の結果を処理
  vector<vector<int>> right_result = func(n, l + 1, r);
  for (auto &arr : right_result) {
    ans.push_back(arr);  // そのまま ans に追加
  }

  return ans;
}

int main() {
  int N, L, R;
  cin >> N >> L >> R;

  // func(N, L, R) の結果を取得
  vector<vector<int>> result = func(N, L, R);

  // 結果の出力
  for (const auto &arr : result) {
    for (int val : arr) {
      cout << val << " ";
    }
    cout << endl;
  }

  return 0;
}
