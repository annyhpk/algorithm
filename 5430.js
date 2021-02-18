let fs = require('fs');
let input = fs.readFileSync('./dev/stdin', 'utf8').trim().split('\r\n');
let result = '';

for(let i=1; i<input.length; i+=3) {
  const tmparr = input[i+2].slice(1,input[i+2].length-1);
  let cur = true;
  let flag = true;
  let fi = bi = 0;
  let cmds = input[i].replace(/RR/gi, '');
  let arr = tmparr ? tmparr.split(',') : [];

  for(let i=0; i<cmds.length; ++i) {
    if (cmds[i] === 'R') {
      cur = !cur;
    } else if (cmds[i] === 'D') {
      if ((arr.length-(fi+bi)) > 0){
        if (cur) ++fi;
        else ++bi;
      } else {
        flag = !flag;
        break;
      }
    } 
  }

  if (flag){
    if (cur) {
      result += `[${arr.slice(fi,arr.length-bi).join()}]\n`;
    } else {
      result += `[${arr.reverse().slice(bi,arr.length-fi).join()}]\n`; 
    }
  } else {
    result += "error\n";
  }
};

console.log(result);