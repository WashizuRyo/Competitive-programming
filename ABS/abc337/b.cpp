#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  string s, ns = "";
  cin >> s;
  int i = 0;
  while (i < s.size() && s[i] == 'A')
    i++;
  while (i < s.size() && s[i] == 'B')
    i++;
  while (i < s.size() && s[i] == 'C')
    i++;

  if (i == s.size()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}