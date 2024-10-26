#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  int i = 0;
  while (i < n) {
    int j = i + 1;
    while (j < n && s[i] == s[j])
      j++;
    cout << s[i] << j - i;
    i = j;
  }

  cout << endl;
}