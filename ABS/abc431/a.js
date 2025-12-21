const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
  const [h, b] = lines[0].split(" ").map(Number);

  if (h <= b) {
    console.log(0);
    return;
  } else {
    console.log(h - b);
    return
  }
}

main();
