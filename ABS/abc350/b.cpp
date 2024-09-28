#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  set<string> st;
  rep(i, s.size()) {
    for (int j = 1; i + j <= s.size(); j++) {
      st.insert(s.substr(i, j));
    }
  }
  cout << st.size() << endl;
}