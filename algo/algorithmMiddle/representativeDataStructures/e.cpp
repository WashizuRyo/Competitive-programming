#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int q;
  cin >> q;
  queue<string> tasks;
  int cursor = 0;
  rep(i, q) {
    int q1;
    string s;
    cin >> q1;
    if (q1 == 0) {
      cin >> s;
      tasks.push(s);
    } else {
      cout << tasks.front() << endl;
      tasks.pop();
    }
  }
}