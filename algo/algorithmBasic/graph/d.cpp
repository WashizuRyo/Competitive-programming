#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  vector<vector<int>> graph(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  // int ans = 0;
  set<int> ans;
  for (int neighbor : graph[x]) {
    for (int twoHopNeighbor : graph[neighbor]) {
      ans.insert(twoHopNeighbor);
    }
  }
  for (int neighbor : graph[x]) {
    ans.erase(neighbor);
  }
  ans.erase(x);
  cout << ans.size() << endl;
}