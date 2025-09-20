const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
	const [a, b, c] = lines[0].split(" ").map(Number);

	if (a === b || b === c || c === a) {
		console.log("Yes");
	} else {
		console.log("No");
	}
}

main();
