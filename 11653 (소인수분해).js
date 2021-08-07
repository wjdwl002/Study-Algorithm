const { S_IFCHR } = require('constants');
const fs = require('fs');
let input = fs.readFileSync('./test.txt').toString().split('\n'); //파일(입력) 읽기

var N = input[0]*1; //input 숫자로 변환

function canDiv(N,div){
    if (N%div == 0) return true;
    else return false;
}

for (var i =2; i<=N; i++){
    if(N == 1) return true;
    while(true){
        if(canDiv(N,i)){
            console.log(i);
            N = N / i;          
        }else break;
    }
}
