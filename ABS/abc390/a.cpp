#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  vector<int> arr = {a, b, c, d, e};
  int count = 0;
  rep(i, 5) {
    if (arr[i] > arr[i + 1]) {
      swap(arr[i], arr[i + 1]);
      vector<int> copy = arr;
      sort(arr.begin(), arr.end());
      if (copy == arr) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
      return 0;
    }
  }

  cout << "No" << endl;
}