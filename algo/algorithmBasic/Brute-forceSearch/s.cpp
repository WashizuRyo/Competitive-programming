#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

bool is_palindrome(string s) {
  int left = 0, right = s.size() - 1;
  while (left < right) {
    if (s[left] != s[right]) return false;
    left++;
    right--;
  }

  return true;
}

int main() {
  int n;
  int ans = 0;
  cin >> n;
  rep(i, n) {
    string s;
    cin >> s;
    if (is_palindrome(s)) ans++;
  }

  cout << ans << endl;
}