#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, k, ans = 0, a;
  cin >> n >> k;
  int empty_sheets = k, start_count = 0;
  rep(i, n) {
    int a = 0;
    cin >> a;
    if (empty_sheets < a) {
      ++start_count;
      empty_sheets = k;
    }
    empty_sheets -= a;
  }
  ++start_count;

  cout << start_count << endl;
}