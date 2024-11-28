#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

vector<ll> p30(10);

void makeBase() {
  p30[0] = 1;
  for (int i = 1; i < 10; i++) {
    p30[i] = p30[i - 1] * 30;
  }
}

ll hash30(string &s) {
  ll len = s.length();
  ll ret = 0;
  rep(i, len) {
    char c = s[len - i - 1];
    ll num = c - 'a' + 1;
    ret += num * p30[i];
  }

  return ret % 1000003;
}

int main() {
  makeBase();
  ll n;
  cin >> n;
  vector<ll> counter(1000003, 0);
  ll maxv = -1;
  rep(i, n) {
    string s;
    cin >> s;
    ll num = hash30(s);
    counter[num]++;
    if (counter[num] > maxv) {
      maxv = counter[num];
    }
  }

  cout << maxv << endl;
}