#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;

  int sum = 0;

  rep(i, s.size()) {
    sum += (s[i] - '0');
    sum += (s[i] - '0') * 10;
    sum += (s[i] - '0') * 100;
  }

  cout << sum << endl;
}