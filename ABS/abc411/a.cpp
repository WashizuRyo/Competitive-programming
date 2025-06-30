#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int l;
  string p;

  cin >> p >> l;
  if (p.length() >= l) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}