#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  int d;
  cin >> n >> d;
  string s;
  cin >> s;
  int count = 0;
  rep(i, s.size()) {
    if (s[i] == '@') count++;
  }

  cout << n - (count - d) << endl;
}