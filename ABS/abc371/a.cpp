#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<bool> taro_exist(m);
  rep(i, n) taro_exist[i] = false;
  vector<int> a(m);
  vector<char> b(m);
  // rep(i, m) cin >> a[i] >> b[i];
  rep(i, m) {
    int a;
    char b;
    cin >> a >> b;
    a--;
    if (b == 'F') {
      cout << "No" << endl;
    } else {
      if (taro_exist[a] == false) {
        cout << "Yes" << endl;
        taro_exist[a] = true;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}