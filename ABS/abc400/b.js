const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
	const [n, m] = lines[0].split(" ").map(Number);
	let ans = 0;

	for (let i = 0; i <= m; i++) {
		const a = n ** i;
		ans += a;
	}

	if (ans > 1e9) {
		console.log("inf");
	} else {
		console.log(ans);
	}
}

main();
