const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
	const n = Number(lines[0]);
	const l = lines[1].split(" ").map(Number);

	const visited = new Set();
	visited.add(0);
	visited.add(n);

	for (let i = 0; i < n; i++) {
		if (l[i] === 0) {
			visited.add(i + 1);
		} else {
			break;
		}
	}

	for (let i = n - 1; i >= 0; i--) {
		if (l[i] === 0) {
			visited.add(i);
		} else {
			break;
		}
	}

	console.log(n + 1 - visited.size);
}

main();
