#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

void bubleSort(vector<int> a) {
  int flag = 1, count = 0;
  while (flag) {
    flag = 0;
    int i = 0;
    for (int j = a.size() - 1; j >= i + 1; j--) {
      if (a[j] < a[j - 1]) {
        flag = 1;
        count++;
        int temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = temp;
      }
    }
    i++;
  }
  rep(k, a.size()) {
    if (k == a.size() - 1) {
      cout << a[k];
      break;
    }
    cout << a[k] << " ";
  }
  cout << endl;
  cout << count << endl;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  bubleSort(a);
}