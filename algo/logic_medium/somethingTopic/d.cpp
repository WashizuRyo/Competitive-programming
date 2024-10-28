#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  string a, b;
  cin >> a;
  cin >> b;

  int carry = 0;
  vector<int> ans;

  for (int i = a.size() - 1; i >= 0; i--) {
    int na = a[i] - '0';
    int nb = b[i] - '0';
    int s = na + nb + carry;
    ans.push_back(s % 2);
    carry = s / 2;
  }

  for (int i = ans.size() - 1; i >= 0; i--) {
    cout << ans[i];
  }

  cout << endl;
}