const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
	const a = lines[0].trim().split(" ").map(Number);
	const count = {};

	for (const aa of a) {
		if (!count[aa]) count[aa] = 0;
		count[aa]++;
	}

	let isThree = false;
	let isY = false;
	for (const value of Object.values(count)) {
		if (value === 3) isThree = true;
		if (value === 2) isY = true;
	}

	if (isThree && isY) {
		console.log("Yes");
	} else {
		console.log("No");
	}
}

main();
