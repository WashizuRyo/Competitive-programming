#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  bool isOk = true;
  rep(i, n) {
    if (s[i] == '#') {
      cout << "#";
      isOk = false;
    } else if (isOk && s[i] == '.') {
      cout << "o";
    } else {
      cout << s[i];
    }
  }

  cout << endl;
}