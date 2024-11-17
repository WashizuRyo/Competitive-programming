#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int f(int x) {}

int main() {
  int n, x;
  cin >> n >> x;
  vector<vector<int>> g(n);
  rep(i, n) {
    int p;
    cin >> p;
    g[i + 1].push_back(p);
  }
}