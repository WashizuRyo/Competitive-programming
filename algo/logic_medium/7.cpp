#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3]) {
    cout << "dangerous" << endl;
  } else {
    cout << "safe" << endl;
  }
}