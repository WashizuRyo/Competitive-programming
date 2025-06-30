#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> d(n - 1);
  rep(i, n - 1) cin >> d[i];

  rep(i, n - 1) {
    int num = d[i];
    for (int j = i; j < n - 1; j++) {
      if (j != i) num += d[j];
      cout << num << " ";
    }

    cout << endl;
  }
}