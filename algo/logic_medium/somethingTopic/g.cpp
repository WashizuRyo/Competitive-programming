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
  for (int i = s.size() - 1; i >= 0; i--) {
    nextStr = (s[i] - 64) + 1;
    if (nextStr = 26) {
      cout << "A" << endl;
    }
  }

  cout << nextStr << endl;
}