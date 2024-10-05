#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  map<int, int> minimum_taste;
  rep(i, n) {
    int a, c;
    cin >> a >> c;
    if (minimum_taste.contains(c)) {
      minimum_taste[c] = min(a, minimum_taste[c]);
    }
  }
}