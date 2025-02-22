#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;

  if (s.size() % 2 != 0) {
    cout << "No" << endl;
    return 0;
  }
  int left = 0, right = 0;
  for (int i = 1; i < s.size(); i++) {
    if (s[left] == '(' && s[i] == ')' || s[left] == '<' && s[i] == '>' || s[left] == '[' && s[i] == ']') {
      right = i;
      while (right - left != 1) {
        left++, right--;
        if (s[left] == '(' && s[right] == ')' || s[left] == '<' && s[right] == '>' || s[left] == '[' && s[right] == ']') {
          continue;
        }

        cout << "No" << endl;
        return 0;
      }
      left = i + 1;
      right = i + 1;
    }
  }

  cout << "Yes" << endl;
}