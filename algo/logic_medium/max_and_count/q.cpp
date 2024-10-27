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
  map<char, int> alphabetCount;

  for (char c : s) {
    alphabetCount[c]++;
  }

  int maxNumber = 0;
  for (auto s : alphabetCount) {
    maxNumber = max(maxNumber, s.second);
  }

  set<char> ans;
  for (char c : s) {
    if (alphabetCount[c] == maxNumber) {
      ans.insert(c);
    }
  }

  for (auto c : ans) {
    cout << c << endl;
  }
}