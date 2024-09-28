#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int k, g, m, cnt = 0;
  cin >> k >> g >> m;
  int ng = 0;
  int nm = 0;
  while (cnt != k) {
    if (ng == g) {
      ng = 0;
    } else if (nm == 0) {
      nm = m;
    } else {
      while (nm != 0 && ng != g) {
        nm--;
        ng++;
      }
    }
    cnt++;
  }
  cout << ng << " " << nm << endl;
}