const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
	const [n, m, k] = lines[0].split(" ").map(Number);

	const count = new Array(n).fill(0);
	const clear = [];
	for (let i = 0; i < k; i++) {
		const [a] = lines[i + 1].split(" ").map(Number);
		count[a - 1]++;
		if (count[a - 1] === m) {
			clear.push(a);
		}
	}

	console.log(clear.join(" "));
}

main();
