#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

bool is_dangerous(string s) {
  rep(i, s.size() - 1) {
    if (int(s[i + 1]) - int(s[i]) != 1) {
      return false;
    }
  }

  return true;
}

int main() {
  string s;
  cin >> s;
  if (is_dangerous(s)) {
    cout << "dangerous" << endl;
  } else {
    cout << "safe" << endl;
  }
}