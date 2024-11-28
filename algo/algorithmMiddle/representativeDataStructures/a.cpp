#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int p30[4] = {1, 30, 30 * 30, 30 * 30 * 30};

int hash30(string &s) {
  int len = s.length();
  int ret = 0;
  rep(i, len) {
    char c = s[len - 1 - i];
    int n = c - 'a' + 1;
    ret += n * p30[i];
  }

  return ret;
}

int main() {
  int n;
  cin >> n;
  const int m = 30 * 30 * 30 * 30;
  vector<int> counter(m, 0);
  rep(i, n) {
    string s;
    cin >> s;
    int num = hash30(s);
    counter[num]++;
  }

  int q;
  cin >> q;
  rep(i, q) {
    string t;
    cin >> t;
    int num = hash30(t);
    cout << counter[num] << endl;
  }

  return 0;
}