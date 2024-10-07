#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  bool same = false;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> na = a;
  sort(a.begin(), a.end());
  if (na == a)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}