let fs = require('fs');
let input = fs.readFileSync('./dev/stdin').toString().split('\n');

let check = 0;

input.forEach((line) => {
  check = 0;
  line.split(' ').forEach((val) => {
    check += parseInt(val);
  })
  check === 4 ? console.log('E') 
  : console.log(String.fromCharCode(68 - check));
})