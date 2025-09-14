const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
  const x = lines[0]
  const c = lines[1]
 
  for (let i = 0; i < 10000; i++) {
    const a = x - i * 1000;
    if (a + a * c / 1000 <= x) {
      console.log(a);
    }
  } 
}

main();