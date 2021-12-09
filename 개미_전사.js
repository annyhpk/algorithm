let fs = require('fs');
let input = fs.readFileSync('./dev/stdin').toString().split('\n');

const N = parseInt(input.shift());
const foodDepots = input[0].split(' ').map((n) => parseInt(n));
let d = Array(101).fill(0);

d[0] = foodDepots[0];
d[1] = Math.max(d[0], foodDepots[1]);

for (let i = 2; i < N; ++i) {
  d[i] = Math.max(d[i - 1], d[i - 2] + foodDepots[i]);
}

console.log(d[N - 1]);
