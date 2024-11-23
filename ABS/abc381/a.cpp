#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int t = s.size();
  if (t % 2 == 0) {
    cout << "No" << endl;
    return 0;
  }
  for (int i = 0; i < ((t + 1) / 2) - 1; i++) {
    if (s[i] != '1') {
      cout << "No" << endl;
      return 0;
    }
  }
  if (s[(t + 2) / 2 - 1] != '/') {
    cout << "No" << endl;
    return 0;
  }

  for (int i = (t + 2) / 2; i < t; i++) {
    if (s[i] != '2') {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}