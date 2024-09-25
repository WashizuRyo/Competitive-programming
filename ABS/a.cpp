#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  char a, b, c;
  cin >> a >> b >> c;
  if (a == '<' && b == '<') {
    // a < b && a > c
    cout << "B" << endl;
  }
}  // a < b && b < c  a < b < c
// a < b && b > c  a < c    b > c > a