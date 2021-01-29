let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\r\n');
input.shift();

let stack = [];
let result = "";

input.forEach(order => {
  let [cmd, opt] = order.split(' ');
  
  switch (cmd) {
    case "push":
      stack.push(opt);
      break;
    case "top":
      result += `${stack.length == 0 ? -1 : stack[stack.length-1]}\n`;
      break;
    case "size":
      result += `${stack.length}\n`;
      break;
    case "empty":
      result += `${stack.length == 0 ? 1 : 0}\n`;
      break;
    case "pop":
      result += `${stack.length == 0 ? -1 : stack.pop()}\n`;
      break;
  }
});

console.log(result);