#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  int i = 0;
  while (i < n) {
    int j = i + 1;
    while (isdigit(s[j]))
      j++;

    string num = "";
    for (int k = i + 1; k <= j; k++) {
      num.push_back(s[k]);
    }

    for (int u = 0; u < stoi(num); u++) {
      cout << s[i];
    }

    i = j;
  }

  cout << endl;
}