let fs = require('fs');
let input = fs.readFileSync('./dev/stdin').toString().split('\r\n').map(x=>+x);
const K = input.shift();

let s = [];

for(let i=0; i<K; i++)
  input[i] === 0 ? s.pop() : s.push(input[i]);

const result = s.reduce((acc, cur) => acc + cur, 0);

console.log(result);