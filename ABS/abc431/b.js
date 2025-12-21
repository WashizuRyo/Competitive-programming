const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
  const x = Number(lines[0]);
  const n = Number(lines[1]);
  const w = lines[2].split(" ").map(Number);
  const q = Number(lines[3]);
  let ans = x;
  const wSet = new Set()
  for (let i = 0; i < q; i++) {
    wIndex = Number(lines[4 + i]);
    if (wSet.has(wIndex)) {
      wSet.delete(wIndex)
      ans -= w[wIndex-1]
      console.log(ans);
      continue;
    }

    wSet.add(wIndex)
    ans += w[wIndex-1]
    console.log(ans);
  }
}

main();
