const { resolveNaptr } = require("dns");
const readline = require("readline");
const rl = readline.createInterface({input : process.stdin, output:process.stdout});
//2447
let input;
let result = "";
const onInput = (value) => (input = parseInt(value));

const star = (i, j, num) => {
    if (i % 3 === 1 && j % 3 === 1){
        result += " ";
    } else {
        if( num === 1){
            result += "*";
        } else {
            star(Math.floor(i/3), Math.floor(j/3), Math.floor(num /3));
        }
    }
};

const onClose = () => {
    for (let i =0; i<input; i++){
        for (let j = 0; j<input; j++){
            star(i, j, input);
        }
        result += '\n';
    }
    console.log(result);
    process.exit();
}

rl.on("line",onInput).on("close",onClose);