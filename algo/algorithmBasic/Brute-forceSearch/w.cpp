#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  map<string, int> ss;

  int ans = 0;
  rep(i, n) {
    string s;
    cin >> s;
    ss[s]++;
    if (ss[s] == 2) {
      cout << endl;
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}