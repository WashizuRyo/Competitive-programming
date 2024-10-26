#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  char c;
  string s;
  cin >> n;
  cin >> c;
  cin >> s;

  char upperC = toupper(c);
  char lowerC = tolower(c);

  int ans = 0;
  rep(i, n) {
    if (s[i] == upperC || s[i] == lowerC) {
      ans++;
    }
  }

  cout << ans << endl;
}