#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string n;
  cin >> n;
  int a = 0, b = 0, c = 0;
  rep(i, n.size()) {
    if (n[i] == '1') a++;
    if (n[i] == '2') b++;
    if (n[i] == '3') c++;
  }
  if (a == 1 && b == 2 && c == 3)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}