#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<P> a;

  vector<bool> visited(n, false);

  int groups = 0;

  rep(i, n) {
    int ai;
    cin >> ai;
    a.push_back({ai, i});
  }

  sort(a.begin(), a.end());

  for (auto ai : a) {
  }
}