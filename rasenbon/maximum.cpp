#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int a;
  cin >> a;
  int min1 = a;
  int maxprofit = -2000000000;
  for (int i = 1; i < n; i++) {
    int k;
    cin >> k;
    maxprofit = max(maxprofit, k - min1);
    min1 = min(min1, k);
  }

  cout << maxprofit << endl;
}