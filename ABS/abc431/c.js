const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
  const [n, m, k] = lines[0].split(" ").map(Number)
  let h = lines[1].split(" ").map(Number)
  let b = lines[2].split(" ").map(Number)
  h.sort((a, b) => a - b)
  b.sort((a, b) => a - b)
  b.sort((a, b) => a - b)
  b.sort((a, b) => a - b)
  let canRobotCount = 0;

  let j = 0;
  for (let i = 0; i < h.length; i++) {
    while(j < b.length && b[j] < h[i]) j++
    if (j < b.length) {
      canRobotCount++;
      j++;
    }
  }

  if (k <= canRobotCount) {
    console.log("Yes");
  } else {
    console.log("No");
  }
}

main();
