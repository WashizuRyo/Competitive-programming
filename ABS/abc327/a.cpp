#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n;
  string s;
  cin >> n >> s;
  rep(i, n) {
    if (s[i] == 'a' && s[i + 1] == 'b' || s[i] == 'b' && s[i + 1] == 'a') {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}