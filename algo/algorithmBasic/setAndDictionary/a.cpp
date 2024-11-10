#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  set<string> s;

  rep(i, n) {
    string ss;
    cin >> ss;
    s.insert(ss);
  }

  cout << s.size() << endl;
}