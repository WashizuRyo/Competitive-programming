#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<string> ans;
  rep(i, n) cin >> a[i];
  int q;
  cin >> q;
  rep(i, q) {
    int type;
    cin >> type;
    if (type == 0) {
      int value;
      cin >> value;
      a.push_back(value);
    } else {
      if (a.size() == 0) {
        ans.push_back("Error");
        continue;
      }
      ans.push_back(to_string(a[a.size() - 1]));
      a.pop_back();
    }
  }

  for (auto a : ans) {
    cout << a << endl;
  }
}