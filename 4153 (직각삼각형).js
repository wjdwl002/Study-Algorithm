//1. module
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});


//2. input
rl.on('line', (line) => {
    let [a, b, c] = line.split(' ').map(Number);
    arr = [a,b,c];
    arr.sort(function(a, b) { return a - b; });
    if (a == 0 && b == 0 && c == 0) rl.close();
    else if (Math.pow(arr[2],2) == Math.pow(arr[1],2) + Math.pow(arr[0],2)) console.log("right");
    else console.log("wrong");
});