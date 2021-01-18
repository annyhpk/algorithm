function solution(arr) {
  let arrMax = arr.map((v) => Math.min(...v))

  console.log(Math.max(...arrMax));
}

const case1 = [
  [3,1,2],
  [4,1,4],
  [2,2,2]
];

const case2 = [
  [7,3,1,8],
  [3,3,3,4]
];

solution(case1);
solution(case2);