const fs = require('fs');
const input = fs.readFileSync('./dev/stdin').toString().split('\r\n');

// const BS = (arr, target) => {
//   let left = 0;
//   let right = arr.length - 1;
//   let mid;

//   while (left <= right) {
//     mid = Math.floor((left + right) / 2);

//     if (arr[mid] === target) {
//       return true;
//     } else if (arr[mid] < target) {
//       left = mid + 1;
//     } else {
//       right = mid - 1;
//     }
//   }
//   return false;
// };

const a = new Set(input[1].split(' '));
const b = input[3].split(' ');

for (let i = 0; i < b.length; i++) {
  a.has(b[i]) ? console.log(1) : console.log(0);
}

// const answer = [];
// const a = input[1].split(' ').sort((a, b) => a - b);
// const b = input[3].split(' ');

// b.map((n) => {
//   BS(a, n) ? answer.push(1) : answer.push(0);
// });

console.log(answer.join('\n'));