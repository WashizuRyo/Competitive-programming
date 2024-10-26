#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int max = 0;
  int index = -1;
  rep(i, n) {
    if (max < a[i]) {
      max = a[i];
      index = i;
    }
  }

  cout << index << endl;
}