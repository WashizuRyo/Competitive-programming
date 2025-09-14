const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
	const n = Number(lines[0]);
  const l = lines[1].split(" ").map(Number)

  const visited = new Array(n).fill(false);

  for (let i = 0; i < n; i++) {
    if (l[i] == 1) {
      visited[i] = true;
    } else {
      break;
    }
  }

  for (let i = n - 1; i >= 0; i--) {
    if (l[i] == 1) {
      visited[i] = true;
    } else {
      break;
    }
  }

  let count = visited.filter(Boolean).length + 2;
  console.log(count);
  console.log(n + 1 - count);
}

main();
