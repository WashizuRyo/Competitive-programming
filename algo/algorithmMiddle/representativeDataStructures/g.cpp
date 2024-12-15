#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int x, q;
  cin >> x;
  cin >> q;
  vector<int> tasks;
  rep(i, q) {
    int done = 0;
    int type, time;
    cin >> type >> time;
    if (type == 0) {
      tasks.push_back(x + time);
    } else {
      auto it = upper_bound(tasks.begin(), tasks.end(), time);

      int index = it - tasks.begin();
      done += index;

      cout << done << endl;
    }
  }
}