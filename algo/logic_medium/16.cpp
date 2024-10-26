#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  for (auto ss : s) {
    int number = ss - 'a' + 1;
    cout << number;
  }
  cout << endl;
}