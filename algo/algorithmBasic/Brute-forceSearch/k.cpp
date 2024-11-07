#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) count++;
  }

  cout << count << endl;
}