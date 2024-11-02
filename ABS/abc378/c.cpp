#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  set<int, bool> ss;
  rep(i, n) { cin >> a[i]; }

  map<int, int> last;
  vector<int> b(n, -1);

  rep(i, n) {
    if (last.find(a[i]) != last.end()) {
      cout << last.find(a[i])->second << " ";
    } else {
      cout << "-1" << " ";
    }
    last[a[i]] = i + 1;
  }
}