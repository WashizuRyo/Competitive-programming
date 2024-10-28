#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int m;
  string n;
  cin >> m >> n;

  int nn = stoi(n);
  deque<int> dq;
  while (nn > 0) {
    int amari = nn % m;
    nn /= m;
    dq.push_front(amari);
  }

  rep(i, dq.size()) { cout << dq[i]; }

  cout << endl;
}