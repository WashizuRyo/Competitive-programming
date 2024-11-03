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
  int win = 0, lose = 0;
  rep(i, n) {
    if (s[i] == 'o') {
      win++;
      lose = 0;
      cout << "o" << " " << win << endl;
    } else {
      lose++;
      win = 0;
      cout << "x" << " " << lose << endl;
    }
  }
}