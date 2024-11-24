#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

vector<int> a;

bool func(int i, int j) {
  bool flag = false;
  if (i == 0) {
    if (j == 0)
      return true;
    else
      return false;
  } else {
    if (j >= a[i - 1] && func(i - 1, j - a[i - 1]) == true) flag = true;
    if (func(i - 1, j) == true) flag = true;
  }

  return flag;
}

int main() {
  int n, x;
  cin >> n >> x;
  a.resize(n, 0);
  rep(i, n) { cin >> a[i]; }
  bool ans = func(n, x);
  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}