const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.on('line', function(line) {

    let pivo1 = 0 , pivo2 = 1;
    let pivo;

    if(line == 0) console.log(pivo1);
    else if (line == 1) console.log(pivo2);

    else{
        for (let i = 2; i<= line; i++){
            pivo = pivo1 + pivo2;
            pivo1 = pivo2;
            pivo2 = pivo;
        }
        console.log(pivo);
    }

  rl.close();
}).on("close", function() {
  process.exit();
});