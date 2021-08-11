//1. module
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});


//2. input
rl.on('line', (line) => {
    let [x1, y1] = line.split(' ').map(Number);
    let [x2, y2] = line.split(' ').map(Number);
    let [x3, y3] = line.split(' ').map(Number);
    x = x1 == x2 ? x3 : x1 == x3 ? x2 : x1;
    y = y1 == y2 ? y3 : y1 == y3 ? y2 : y1;
    console.log(x,y);
    rl.close();
});
