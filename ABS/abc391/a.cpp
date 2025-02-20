#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  vector<string> a;
  a = {"N", "NE", "E", "SE", "S", "SW", "W", "NW", "N", "NE", "E", "SE"};
  string d;
  cin >> d;
  rep(i, a.size()) {
    if (d == a[i]) {
      cout << a[i + 4] << endl;
      return 0;
    }
  }
}