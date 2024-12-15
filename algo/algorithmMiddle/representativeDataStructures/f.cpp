#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string x;
  cin >> x;
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) { cin >> s[i]; }
  stack<int> numbers;
  rep(i, n) {
    if (s[i] == "+") {
      int first = numbers.top();
      numbers.pop();
      int second = numbers.top();
      numbers.pop();
      numbers.push(first + second);
    } else if (s[i] == "-") {
      int first = numbers.top();
      numbers.pop();
      int second = numbers.top();
      numbers.pop();
      numbers.push(second - first);

    } else if (s[i] == "*") {
      int first = numbers.top();
      numbers.pop();
      int second = numbers.top();
      numbers.pop();
      numbers.push(first * second);

    } else {
      numbers.push(stoi(s[i]));
    }
  }

  cout << x << "=" << numbers.top() << endl;
}