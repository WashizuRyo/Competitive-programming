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
    graph[b].push_back(a);
  }
  int maxv = -111;
  int ans = 0;
  rep(i, n) {
    if (maxv < int(graph[i].size())) {
      maxv = int(graph[i].size());
      ans = i;
    }
  }

  sort(graph[ans].begin(), graph[ans].end());
  rep(i, graph[ans].size()) { cout << graph[ans][i] << " "; }

  cout << endl;
}