const fs = require('fs');
const [n, ...temp] = fs.readFileSync("./data.txt").toString().trim().split("\n");

const arr = temp[0].split(' ').map(e=>Number(e))
const originalArr = [...arr];
const set = new Set(arr.sort(function (a,b) {
        return a - b;
    }));
const sortedArr = Array.from(set);

let answer = '';
originalArr.forEach(e=>{
    const index = sortedArr.findIndex(s=>s==e);
    answer += index;
    answer += ' ';
})

console.log(answer.slice(0,-1));