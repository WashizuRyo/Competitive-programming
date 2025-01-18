#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<long long, long long>;
using ll = long long;

int main() {
  ll q;
  cin >> q;
  deque<P> dq;
  ll x = 0, minus = 0, erase = 0;
  rep(i, q) {
    ll type, s;
    cin >> type;
    if (type == 1) {
      cin >> s;
      dq.push_back(make_pair(x, s));
      // cout << x << " " << s << endl;
      x += s;
    } else if (type == 2) {
      auto a = dq.front();
      // cout << a.first << " " << a.second << endl;
      minus += a.second;
      dq.pop_front();
    } else if (type == 3) {
      cin >> s;
      // cout << endl;
      auto snake = dq[s - 1];
      // cout << snake.first << " " << snake.second << endl;
      cout << snake.first - minus << endl;
    }
  }
}