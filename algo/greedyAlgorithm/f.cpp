#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;

  int left = 0, right = n, i = 0;
  while (left != right) {
    if (s[left] == t[i]) {
      i++;
    }
    left++;
  }

  if (i == m)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}