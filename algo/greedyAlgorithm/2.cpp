#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  while (n != 0) {
    if (n % 2 == 0) {
      n /= 2;
      ans++;
    } else {
      n--;
      ans++;
    }
  }

  cout << ans << endl;
}