const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
  const [x, c] = lines[0].split(" ").map(Number);
	const k = Math.floor(x / (c + 1000));
	console.log(k * 1000);
}

main();
