#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int x;
  char p, q;
  cin >> x;
  cin >> p >> q;
  int permission = 0;
  if (p == 'o') permission = x / 100;
  if (p == 'g') permission = x / 10 % 10;
  if (p == 'u') permission = x % 10;

  int action = 0;
  if (q == 'r') action = permission & (1 << 2);
  if (q == 'w') action = permission & (1 << 1);
  if (q == 'x') action = permission & (1 << 0);

  cout << (action ? "Yes" : "No") << endl;
}