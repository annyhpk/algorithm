const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let input = [];

rl.on('line', function (line) {
  input.push(line);
}).on('close', function () {
  const [x, y] = input
    .shift()
    .split(' ')
    .map((n) => parseInt(n));
  const board = input.map((line) => line.split(' ').map((n) => parseInt(n)));

  let visited = Array.from(Array(x), () => new Array(y).fill(0));
  let Q = [];

  // answer
  let total = 0;
  let maxNum = 0;

  const bfs = () => {
    let count = 0;
    const dx = [1, 0, -1, 0];
    const dy = [0, 1, 0, -1];

    while (Q.length !== 0) {
      const cur = Q.shift();

      for (let i = 0; i < 4; i++) {
        let nx = cur[0] + dx[i];
        let ny = cur[1] + dy[i];

        if (nx < 0 || nx >= x || ny < 0 || ny >= y) continue;
        if (visited[nx][ny] || board[nx][ny] === 0) continue;

        count++;
        visited[nx][ny] = 1;
        Q.push([nx, ny]);
      }
    }
    if (maxNum < count) maxNum = count;
  };

  board.forEach((n, ix) => {
    n.forEach((m, iy) => {
      if (visited[ix][iy] === 1 || m === 0) return;
      total++;
      visited[ix][iy] = 1;
      Q.push([ix, iy]);
      bfs();
    });
  });

  console.log(`${total}\n${maxNum + 1}`);
  process.exit();
});
