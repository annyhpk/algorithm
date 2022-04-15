let fs = require('fs');
let input = fs
  .readFileSync('./dev/stdin')
  .toString()
  .split('\r\n')
  .map((n) => parseInt(n));

const arr = [0, 1, 2, 4];

for (let i = 4; i <= 11; i++) {
  arr.push(arr[i - 3] + arr[i - 2] + arr[i - 1]);
}

for (let j = 1; j <= input[0]; j++) {
  console.log(arr[input[j]]);
}
