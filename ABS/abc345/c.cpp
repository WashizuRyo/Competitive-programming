#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s, t;
  cin >> s >> t;
  s.push_back('X');
  for (char &ch : s) {
    ch = toupper(ch);
  }

  int index = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == t[index]) {
      ++index;
      if (index == 3) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}