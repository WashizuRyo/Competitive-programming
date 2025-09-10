const graph = [
  [1, 2], // 0 → 1, 2
  [3],    // 1 → 3
  [3],    // 2 → 3
  []      // 3
];

const n = graph.length
const visited = new Array(n).fill(false);
const order = [];

function dfs(n) {
  visited[n] = true;

  for (const nn of graph[n]) {
    if (!visited[n]) {
      dfs(nn);
    }
  }

  order.push(n);
}

for (let v = 0; v < n; v++) {
  if (!visited[v]) dfs(v);
}
