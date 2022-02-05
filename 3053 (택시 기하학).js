const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.on('line', function(line) {
    let uCircle = Math.pow(line,2) * Math.PI;
    let tCircle = Math.pow(line,2) * 2;

  console.log(uCircle.toFixed(6), tCircle.toFixed(6));

  rl.close();
}).on("close", function() {
  process.exit();
});