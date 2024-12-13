#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;

  int count = 0;
  vector<int> index;
  rep(i, 31) {
    if (n & (1 << i)) {
      count++;
      index.push_back(i);
    }
  }

  cout << count << endl;
  rep(i, index.size()) { cout << index[i] << " "; }
  cout << endl;
}