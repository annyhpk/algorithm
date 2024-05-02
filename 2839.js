let fs = require('fs');
let input = parseInt(fs.readFileSync('./dev/stdin').toString().split('\n')[0]);

const solution = (n) => {
  let count_f = parseInt(n / 5);
  let count_t = 0;
  let input = n - count_f * 5;
  
  if (input === 0) {
    return count_f;
  }
  if (input % 3 === 0) {
    return count_f + parseInt(input / 3);
  }

  while (1) {
    if (input - 3 >= 0) {
      count_t++;
      input -= 3;
      if (input === 0) {
        return count_f + count_t;
      }
    } else if (count_f) {
      count_f--;
      input += 5;
    } else {
      return -1;
    }
  }
};

console.log(solution(18));
console.log(solution(4));
console.log(solution(6));
console.log(solution(9));
console.log(solution(11));
console.log(solution(7));