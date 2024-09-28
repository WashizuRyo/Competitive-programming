#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  while (true) {
    if ((n / 100) * (n % 100 / 10) == n % 10) {
      cout << n << endl;
      return 0;
    }
    n++;
  }
}