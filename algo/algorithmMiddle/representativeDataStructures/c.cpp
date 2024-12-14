#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int q;
  cin >> q;
  vector<string> shelf;
  vector<string> readBook;
  rep(i, q) {
    int q1;
    string s;
    cin >> q1;
    if (q1 == 1) {
      cin >> s;
      shelf.push_back(s);
    } else {
      readBook.push_back(shelf.back());
      shelf.pop_back();
    }
  }

  for (auto book : readBook) {
    cout << book << endl;
  }
}