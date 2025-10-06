const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
	const [x, y] = lines[0].split(" ");
	const a = x === "Ocelot" ? 1 : x === "Serval" ? 2 : 3;
	const b = y === "Ocelot" ? 1 : y === "Serval" ? 2 : 3;

	if (a >= b) {
		console.log("Yes");
	} else {
		console.log("No");
	}
}

main();
