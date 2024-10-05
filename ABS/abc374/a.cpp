#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  if (s[s.size() - 3] == 's' && s[s.size() - 2] == 'a' && s[s.size() - 1] == 'n') {
    cout << "Yes" << endl;
  } else
    cout << "No" << endl;
}