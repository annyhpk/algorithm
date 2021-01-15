let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

let money = 1000 - input[0];

const coins = [500, 100, 50, 10, 5, 1];

let count = 0;

for(coin of coins) {
  if(money === 0) break; 
   count += parseInt(money / coin);
   money %= coin;
}

console.log(count);