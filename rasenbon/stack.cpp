#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  stack<int> s;
  string line;

  getline(cin, line);

  stringstream ss(line);
  string token;
  while (ss >> token) {
    if (isdigit(token[0])) {
      s.push(stoi(token));
    } else {
      int b = s.top();
      s.pop();
      int a = s.top();
      s.pop();

      if (token == "+") {
        s.push(a + b);
      } else if (token == "-") {
        s.push(a - b);
      } else if (token == "*") {
        s.push(a * b);
      } else if (token == "/") {
        s.push(a / b);
      }
    }
  }

  cout << s.top() << endl;
  return 0;
}