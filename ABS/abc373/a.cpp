#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int cnt = 0;
  string s;
  rep(i, 12) {
    cin >> s;
    if (s.size() == i + 1) {
      cnt++;
    }
  }
  cout << cnt << endl;
}