const fs = require("fs");
const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
	const a = Number(lines[0]);
	let resule = 0;

	for (let i = 0; i < a; i++) {
		let a = (-1) ** (i + 1);
		let b = (i + 1) ** 3;
		resule += a * b;
	}

	console.log(resule);
}

main();
