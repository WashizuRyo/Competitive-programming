const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
  const q = lines[0];

  const ans = []
  for (let i = 0; i < q; i++) {
    const [type, query] = lines[i+1].split(" ").map(Number)
    if (type === 1) {
      ans.push(query)
    } else {
      const t = ans.shift()
      console.log(t)
    }
  }
}

main();
