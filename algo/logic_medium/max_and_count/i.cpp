#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), ansV(9);
  rep(i, n) cin >> a[i];
  rep(i, n) { ansV[a[i] - 1]++; }

  int ans = 0;
  int index = 0;
  rep(i, 9) {
    if (ans < ansV[i]) {
      ans = ansV[i];
      index = i;
    }
  }

  cout << index + 1 << endl;
}