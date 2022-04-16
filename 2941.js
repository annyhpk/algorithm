let fs = require('fs');
let input = fs.readFileSync('./dev/stdin').toString().split('\r\n');

input.map((s) => {
  console.log(solution(s));
});

function solution(str) {
  const croAlpha = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z='];
  let answer = str;

  croAlpha.map((alpha) => {
    let tmp = answer.split(alpha);
    answer = tmp.join('@');
  });

  return answer.length;
}
