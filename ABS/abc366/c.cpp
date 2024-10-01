#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int q;
  cin >> q;
  vector<int> bag(0);
  map<int, int> bag_map;  // 要素の出現回数を管理するマップ
  int unique_count = 0;
  rep(i, q) {
    int number, x;
    cin >> number;
    if (number == 1 || number == 2) {
      cin >> x;
    }
    if (number == 1) {
      if (bag_map[x] == 0) {
        unique_count++;
      }
      bag_map[x]++;
    } else if (number == 2) {
      if (bag_map[x] > 0) {
        bag_map[x]--;
        if (bag_map[x] == 0) unique_count--;
      }
    } else {
      cout << unique_count << endl;
    }
  }
}