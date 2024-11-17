#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> graph(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
  }

  rep(i, n) {
    rep(j, graph[i].size()) {
      sort(graph[i].begin(), graph[i].end());
      cout << graph[i][j] << " ";
    }
    cout << endl;
  }
}