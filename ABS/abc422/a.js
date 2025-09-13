const fs = require("fs");

const lines = fs.readFileSync(0, "utf8").trim().split("\n");

function main() {
	let world = lines[0][0];
	let stage = lines[0][2];

	if (stage < 8) {
		stage++;
		console.log(world + "-" + stage);
		return 0;
	} else {
		world++;
		console.log(world + "-" + 1);
		return 0;
	}
}

main();
