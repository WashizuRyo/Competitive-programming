#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  char a = 'A';
  int sum = 0;
  int nextStr = 0;
  int carry = 1;
  string result;
  for (int i = s.size() - 1; i >= 0; i--) {
    if (carry == 0) {
      result += s[i];
    }

    char current_char = s[i];

    if (current_char == 'Z') {
      result += 'A';
      carry = 1;
    } else {
      result += (current_char + 1);
      carry = 0;
    }

    if (carry == 1) {
      result += 'A';
    }
  }

  reverse(result.begin(), result.end());

  cout << result << endl;
}