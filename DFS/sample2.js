const n = 4;
const graph = [
  [1, 2],
  [3],
  [3]
]

const visited = new Array(n).fill(false);
let found = false;

function dfs(v, t) {
  if (v == t) {
    found = true;
    return;
  }

  visited[v] = true;

  for (const nv of graph[v]) {
    if(!visited[nv]) {
      dfs(nv, t);
      if (found) return;
    }
  }
}
