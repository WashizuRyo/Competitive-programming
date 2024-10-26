#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {

  string s;
  cin >> s;
  string ss = s;
  sort(ss.begin(), ss.end());
  if (ss == "ABC")
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}