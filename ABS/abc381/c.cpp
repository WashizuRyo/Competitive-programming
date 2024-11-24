#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

bool check(int t, vector<int> s) {
  if (t % 2 == 0) {
    cout << "No" << endl;
    return false;
  }
  for (int i = 0; i < ((t + 1) / 2) - 1; i++) {
    if (s[i] != '1') {
      cout << "No" << endl;
      return false;
    }
  }
  if (s[(t + 2) / 2 - 1] != '/') {
    cout << "No" << endl;
    return false;
  }

  for (int i = (t + 2) / 2; i < t; i++) {
    if (s[i] != '2') {
      cout << "No" << endl;
      return false;
    }
  }

  return true;
}

int main() {
  int n, right = 0, left = 0;
  cin >> n;
  string s;
  cin >> s;
  int t = s.size();
  while (right < t) {
  }
}