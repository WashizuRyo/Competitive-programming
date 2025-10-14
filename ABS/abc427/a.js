const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
	const s = lines[0].split("");
	const mid = Math.floor(s.length / 2);
	s.splice(mid, 1);
	console.log(s.join(""));
}

main();
