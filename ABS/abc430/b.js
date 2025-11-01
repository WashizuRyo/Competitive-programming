const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
  const [n, m] = lines[0].split(" ").map(Number)
  const grid = lines.slice(1, n + 1).map((s) => s.split(""))
  const ans = new Set();

  for (let i = 0; i <= n - m; i++) {
    for (let j = 0; j <= n - m; j++) {

      let part = [];
      for (let r = 0; r < m; r++) {
        let row = []
        for (let c = 0; c < m; c++) {
          row.push(grid[i+r][j+c])
        }

        part.push(...row);
      }
      ans.add(part.join(""))
    }
  }
  
  console.log(ans.size);
}

main();
