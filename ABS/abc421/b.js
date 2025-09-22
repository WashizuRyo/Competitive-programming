const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split(" ").map(BigInt);

function f(x) {
	// 文字列にして反転して数値に戻す
	return BigInt(x.toString().split("").reverse().join(""));
}

function main([X, Y]) {
	const A = [];
	A[1] = X;
	A[2] = Y;

	for (let i = 3; i <= 10; i++) {
		A[i] = f(A[i - 1] + A[i - 2]);
	}

	console.log(A[10].toString());
}

main(input);
