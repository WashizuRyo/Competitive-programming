const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
	const s = lines[0];

	let ans = [];
	for (let i = 0; i < s.length; i++) {
		if (s[i] === "#") {
			ans.push(i + 1);
		}

		if (ans.length === 2) {
			console.log(ans.join(","));
			ans = [];
		}
	}
}

main();
