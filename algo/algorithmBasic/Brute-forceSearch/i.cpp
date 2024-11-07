#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int count = 0;
  rep(i, n) {
    if (n % i == 0) count++;
  }

  if (count != 2) {
    cout << "No" << endl;
  } else if (count == 2) {
    cout << "Yes" << endl;
  }
}