const graph = [
  [1, 2], // 0 → 1, 2
  [0, 3], // 1 → 0, 3
  [0, 3], // 2 → 0, 3
  [1, 2]  // 3 → 1, 2
];

const visited = new Array(graph.length).fill(false)

function dfs(v) {
  visited[v] = true;
  console.log("visit", v);

  for (const nv of graph[v]) {
    if (!visited[nv]) {
        dfs(nv);
    }
  }
}

dfs(0);
