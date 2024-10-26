#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string t;
  cin >> t;
  for (int i = 0; i < t.size(); i = i + 2) {
    string number = t.substr(i, 2);
    if (number.size() < 2) {
      char ans = (number[0]) + 'a' - 1;
      cout << ans;
    } else {
      char ans = stoi(number) + 'a' - 1;
      cout << ans;
    }
  }
  cout << endl;
}