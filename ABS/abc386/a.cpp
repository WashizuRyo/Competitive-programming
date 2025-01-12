#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int a, b, c, d, e;
  vector<int> s(4);
  rep(i, 4) { cin >> s[i]; }

  sort(s.begin(), s.end());
  int xc = count(s.begin(), s.end(), s[0]);
  int yc = count(s.begin(), s.end(), s[3]);
  if (xc == 3 && yc == 1 || xc == 1 && yc == 3 || xc == 2 && yc == 2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}