const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
    const [a, b,c, d] = lines[0].split(" ").map(Number)

  if (c >= a) {
    if (d >= b) {
      console.log("No");
    } else {
      console.log("Yes");
    }
  } else {
    console.log("No");
  }
}

main();
