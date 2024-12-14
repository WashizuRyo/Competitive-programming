#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> queue(n, -1);
  int head = 0, tail = 0;

  rep(i, q) {
    int qq, q2;
    cin >> qq;
    if (qq == 0) {
      cin >> q2;
      queue[tail] = q2;
      tail++;
      if (tail == n) tail = 0;
    } else {
      queue[head] = -1;
      head++;
      if (head == n) head = 0;
    }
  }

  for (auto v : queue) {
    cout << v << endl;
  }
}