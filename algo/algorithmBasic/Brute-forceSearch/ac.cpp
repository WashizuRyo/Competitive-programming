#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;
  int sumA = 0, sumB = 0;

  for (int i = 1; i < a; i++) {
    if (a % i == 0) sumA += i;
  }
  for (int i = 1; i < b; i++) {
    if (b % i == 0) sumB += i;
  }

  if (sumA == b && sumB == a && a != b)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}