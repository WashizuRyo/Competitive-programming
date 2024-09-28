#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  set<int> b;
  rep(i, n) {
    cin >> a[i];
    b.insert(a[i]);
  }
  // sort(b.begin(), b.end());
  auto it = prev(b.end(), 2);
  cout << *it << endl;
}