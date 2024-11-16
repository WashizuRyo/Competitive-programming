#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int count = 0;
  rep(i, s.size()) {
    if (s[i] == '|') {
      cout << count << " ";

      count = 0;
    } else
      count++;
  }
  cout << endl;
}