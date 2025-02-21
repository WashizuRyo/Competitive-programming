#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> P(N), Q(N), result(N);

  // 入力を受け取る
  for (int i = 0; i < N; i++) {
    cin >> P[i];
    P[i]--;  // 0-indexed にする
  }
  for (int i = 0; i < N; i++) {
    cin >> Q[i];
    Q[i]--;
  }

  // 各 i に対して Si を求める
  for (int i = 0; i < N; i++) {
    result[i] = Q[P[i]];  // P[i] は 0-indexed になっているので、そのまま使える
  }

  // 結果を出力
  for (int i = 0; i < N; i++) {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}
