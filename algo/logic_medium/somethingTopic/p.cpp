#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  rep(i, n) {

    if (s[i] != '.') continue;

    // left
    int white_count = 0;
    int all_count = 0;
    for (int j = i - 1; j >= 0; j--) {
      if (s[j] == 'o') {
        if (white_count == all_count && white_count >= 1) {
          cout << "Yes" << endl;
          return 0;
        }
      } else if (s[j] == 'x') {
        white_count++;
      }
      all_count++;
    }

    // right
    white_count = 0;
    all_count = 0;
    for (int j = i + 1; j < n; j++) {
      if (s[j] == 'o') {
        if (white_count == all_count && white_count >= 1) {
          cout << "Yes" << endl;
          return 0;
        }
      } else if (s[j] == 'x') {
        white_count++;
      }
      all_count++;
    }
  }

  cout << "No" << endl;
}
