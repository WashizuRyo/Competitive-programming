#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, t;
  cin >> n >> t;
  vector<int> a(t);
  vector<int> bingo(n * n);
  vector<int> ana(n * n, 0);

  rep(i, n * n) { bingo[i] = i + 1; }

  // rep(i, n * n) { cout << bingo[i] << endl; }
}