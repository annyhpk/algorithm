let fs = require('fs');
let input = fs.readFileSync('./dev/stdin').toString().split('\n');

input = input.map(i => i.replace(/(\r|\n|\t)/gm,""));

let count = 0;
let alpa1 = new Array(26).fill(0);
let alpa2 = new Array(26).fill(0);

input[0].split('').forEach((char) => alpa1[char.charCodeAt()-97] += 1); 
input[1].split('').forEach((char) => alpa2[char.charCodeAt()-97] += 1); 

for(let i=0; i<26; i++) {
  if(alpa1[i] !== alpa2[i]) {
    count += Math.abs(alpa1[i] - alpa2[i]);
  }
}

console.log(count);