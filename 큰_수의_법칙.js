function solution(opt, arr) {
  let result = 0;
  let [, M, K] = opt;
  let tmp = 0;

  arr.sort((a,b) => b-a);

  tmp = ~~(M/K)

  result = arr[0] * (M - tmp) + tmp * arr[1];

  return result;
}

const opt = [5, 8, 3];
const arr = [2, 4, 5, 4, 6];

console.log(solution(opt, arr));
