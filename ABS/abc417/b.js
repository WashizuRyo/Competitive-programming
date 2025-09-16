const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
	const [n, m] = lines[0].split(" ").map(Number);
	const a = lines[1].split(" ").map(Number);
	const b = lines[2].split(" ").map(Number);

	for (let i = 0; i < m; i++) {
		const index = a.indexOf(b[i]);
		if (index !== -1) {
			a.splice(index, 1);
		}
	}

	console.log(a.join(" "));
}

main();