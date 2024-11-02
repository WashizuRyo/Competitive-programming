#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int carry = 1;
  string ans;
  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == 'Z') {
      s[i] = 'A';
    } else {
      s[i]++;
      break;
    }
    if (i == 0) {
      cout << "A" << s << endl;
      return 0;
    }
  }
  cout << s << endl;
}