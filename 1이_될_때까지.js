function solution(N, K) {
  let count = 1;
  N -= 1;
  
  while(N != 1) {
    if(N % K == 0) {
      N = ~~(N / K);
      count++;
    } else {
      N -= 1;
      count++;
    }
  }

  console.log(count)
}

solution(25, 5);