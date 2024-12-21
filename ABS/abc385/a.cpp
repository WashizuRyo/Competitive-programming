#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b == c)
    cout << "Yes" << endl;
  else if (a + c == b)
    cout << "Yes" << endl;
  else if (b + c == a)
    cout << "Yes" << endl;
  else if (b == a && a == c)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}