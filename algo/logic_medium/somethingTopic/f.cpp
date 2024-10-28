#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int h, m, s, t;
  cin >> h >> m >> s;
  cin >> t;
  int nh = 0, nm = 0, ns = 0;
  nh = t / 3600;
  nm = t % 3600 / 60;
  ns = t % 3600 % 60;

  if ((s + ns) >= 60) {
    if ((m) >= 60) {
      h++;
      m = (m + nm) % 60;
    } else {
      ++m;
    }
    s = (s + ns) % 60;
  } else {
    s += ns;
  }

  if ((m + nm) >= 60) {
    h++;
    m = (m + nm) % 60;
  } else {
    m += nm;
  }

  h += nh;

  cout << h << " " << m << " " << s << endl;
}