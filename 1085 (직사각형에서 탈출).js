//1. module
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});


//2. input
rl.on('line', (line) => {
    let [x, y, w, h] = line.split(' ').map(Number);
    var x2 = w-x, y2 = h-y;
    console.log(Math.min(...[x, y, x2, y2]));
});
