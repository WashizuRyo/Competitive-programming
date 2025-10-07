const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
	const s = lines[0];
	const a = {};
	for (let i = 0; i < s.length; i++) {
		a[s[i]] = (a[s[i]] || 0) + 1;
	}

	for (const ch in a) {
		if (a[ch] === 1) {
			console.log(ch);
		}
	}
}

main();
