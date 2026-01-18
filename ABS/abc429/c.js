const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
  const n = Number(lines[0])
  const a = lines[1].split(" ").map(Number)
  let ans = 0;

  const total = n * (n - 1) * (n - 2) / 6;


  console.log(ans);
  console.log(ans);
}

main();
