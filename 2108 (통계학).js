const fs = require('fs');
let [n, ...arr] = fs.readFileSync("data.txt",'utf8').toString().trim().split("\n");

n = parseInt(n);
arr = arr.map(e=>parseInt(e)).sort((a,b)=>a-b);

console.log(arr);

function toZero(n){
    if(n == -0) return 0
    return n
}

function print(){
    console.log(toZero(avg));
    console.log(toZero(mid));
    console.log(toZero(mode));
    console.log(toZero(range));
}

const avg = Math.round(arr.reduce((acc, cur, i)=>acc+=cur,0)/arr.length);
const max = Math.max(...arr);
const min = Math.min(...arr);
const mid = arr[Math.floor(arr.length/2)];

let mode;
const range = max - min;

let idxObj = {}
arr.forEach((e,i)=>{
    if(!idxObj[e])idxObj[e] = 1;
    else idxObj[e]++;
})

const modeN = Math.max(...Object.values(idxObj));

const modeArr = Object.keys(idxObj).filter(key=>idxObj[key] === modeN).map(e=>parseInt(e));


if(modeArr.length>1)
    modeArr.forEach((e,i)=>{
        if(e === Math.min(...modeArr)){
            modeArr.splice(i,1);
            mode = Math.min(...modeArr);
            print();
            return;
        }
})
else{
    mode = modeArr[0];
    print(mode)
}

