#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> q(n), r(n);
  rep(i, n) cin >> q[i] >> r[i];
  int qq;
  cin >> qq;
  vector<int> t(qq), d(qq);
  rep(i, qq) { cin >> t[i] >> d[i]; }

  rep(i, qq) {
    if (d[i] % q[t[i] - 1] <= r[t[i] - 1]) {
      d[i] = r[t[i] - 1] - d[i] % q[t[i] - 1] + d[i];
    } else {
      d[i] = q[t[i] - 1] * (d[i] / q[t[i] - 1] + 1) + (r[t[i] - 1]);
    }
    cout << d[i] << endl;
  }
}

// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); i++)
// using P = pair<int, int>;
// using ll = long long;

// int main() {
//   int n;
//   cin >> n;
//   vector<int> q(n), r(n);
//   rep(i, n) cin >> q[i] >> r[i];
//   int qq;
//   cin >> qq;
//   vector<int> t(qq), d(qq);
//   rep(i, qq) { cin >> t[i] >> d[i]; }

//   rep(i, qq) {
//     int ans = 0;
//     while (d[i] % q[t[i] - 1] != r[t[i] - 1]) {
//       d[i]++;
//     }
//     cout << d[i] << endl;
//   }
// }