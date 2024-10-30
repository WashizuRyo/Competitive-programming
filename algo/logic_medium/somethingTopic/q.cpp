#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  string s;
  cin >> n >> k;
  cin >> s;

  // left
  int white_count = 0;
  int all_count = 0;
  for (int j = k - 1; j >= 0; j--) {
    if (s[j] == 'o') {
      if (white_count == all_count && white_count >= 1) {
        for (int i = k; i >= j; i--) {
          s[i] = 'o';
        }
      }
    } else if (s[j] == 'x') {
      white_count++;
    }
    all_count++;
  }

  // right
  white_count = 0;
  all_count = 0;
  for (int j = k + 1; j < n; j++) {
    if (s[j] == 'o') {
      if (white_count == all_count && white_count >= 1) {
        for (int i = k; i <= j; i++) {
          s[i] = 'o';
        }
      }
    } else if (s[j] == 'x') {
      white_count++;
    }
    all_count++;
  }
  cout << s << endl;
}