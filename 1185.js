let fs = require('fs');
let input = fs.readFileSync('./dev/stdin').toString().split('\n');

const [n, k] = input[0].split(' ');

let arr = [...Array(parseInt(n)+1).keys()].slice(1,n+1);
let result = [];
let cur = -1; 

for(let i=0; i<n; i++) {
  for(let j=0; j<k; j++){
    if (cur === arr.length-1) {
      cur = -1;
    }
    cur+=1;
  }
  cur-=1;
  result.push(...arr.splice(cur+1,1));
}

let toStr = '<' + result.join(', ') + '>';

console.log(toStr);