#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

string rec(int n) {
  if (n == 1) return "1";

  return rec(n - 1) + " " + to_string(n) + " " + rec(n - 1);
}

int main() {
  int n;
  vector<int> ans;
  cin >> n;
  cout << rec(n) << endl;
}