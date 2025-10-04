const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
  const [n, m] = lines[0].split(" ").map(Number);
  const grid = lines.slice(1, n + 1).map(line => line.split("").map(Number));
  const ans = new Array(n).fill(0);
  for (let i = 0; i < m; i++) {
    let oneCount = 0;
    for (let j = 0; j < n; j++) {
      if (grid[j][i] === 0) oneCount++;
    }
    let zeroCount = n - oneCount;

    if (oneCount > zeroCount) {
      for (let j = 0; j < n; j++) {
        if (grid[j][i] === 1) ans[j]++;
      }
    } else if (oneCount === zeroCount) {
      for (let j = 0; j < n; j++) {
        ans[j]++;
      }
    } else if (oneCount < zeroCount) {
      for (let j = 0; j < n; j++) {
        if (grid[j][i] === 0) ans[j]++;
      }
    }

  }
  const max = Math.max(...ans);

  const lastAnd = [];
  for (let j = 0; j < n; j++) {
    if (ans[j] === max) {
      lastAnd.push(j);
    }
  }
  console.log(lastAnd.map((i) => ++i).join(" "))
}

main();
