#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;

  int mid;
  if (n % 2 == 0) {
    mid = n / 2;
    rep(i, n) {
      if (i == mid - 1 || i == mid) {
        cout << "=";
      } else {
        cout << "-";
      }
    }
    cout << endl;
  } else {
    mid = n / 2 + 1;
    rep(i, n) {
      if (i == mid - 1) {
        cout << "=";
      } else {
        cout << "-";
      }
    }
    cout << endl;
  }
}