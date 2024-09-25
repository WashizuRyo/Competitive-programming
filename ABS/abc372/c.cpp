#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, q;
  string s;
  string subString = "abc";
  cin >> n >> q;
  cin >> s;
  rep(i, q) {
    int x;
    char c;
    cin >> x >> c;
    string newS = s;
    newS[i + 1] = c;
    int cnt = 0;
    int pos = newS.find(subString);
    while (pos != std::string::npos) {
      cnt++;
      pos = newS.find(subString, pos + subString.length());
    }
    cout << cnt << endl;
  }
}