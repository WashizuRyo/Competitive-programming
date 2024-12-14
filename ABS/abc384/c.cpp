#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {1, 2, 3};
  int n = arr.size();
  set<set<int>> subsets;  // 部分集合を格納するset

  // 2^n 通りの部分集合を列挙
  for (int bit = 0; bit < (1 << n); bit++) {  // 0 から 2^n-1 まで
    set<int> subset;                          // 一つの部分集合を保持

    for (int i = 0; i < n; i++) {
      // ビットが立っている部分の要素を選ぶ
      if (bit & (1 << i)) {
        subset.insert(arr[i]);
      }
    }

    // subsetをsetに追加
    subsets.insert(subset);
  }

  sort(subsets.begin(), subsets.end(), [](const set<int> &a, const set<int> &b) {
    return a.size() < b.size();  // サイズが小さい順にソート
  });

  // 部分集合を出力
  for (const auto &subset : subsets) {
    cout << "{ ";
    for (int x : subset)
      cout << x << " ";
    cout << "}" << endl;
  }

  return 0;
}
