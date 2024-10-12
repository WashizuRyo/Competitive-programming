#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int count = 0;
  if (n == 1 || n == 2) {
    cout << 0 << endl;
    return 0;
  }
  rep(i, n - 2) {
    if (s[i] == '#' && s[i + 2] == '#' && s[i + 1] != '#') {
      count++;
    }
  }
  cout << count << endl;
}