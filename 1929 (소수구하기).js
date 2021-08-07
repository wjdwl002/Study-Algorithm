//1.
const { S_IFCHR } = require('constants');
const fs = require('fs');
let input = fs.readFileSync('./test.txt').toString().split('\n'); //파일(입력) 읽기

var M = input[0]*1; //input 숫자로 변환
var N = input[1]*1;
console.log(M);

function isPrime(num){
    if(num <2) return false;
    for (var i =2; i*i<=num; i++){ 
        if(num % i == 0) return false;
    }
    return true;
}

for (var i=M; i<N+1; i++){
    if(isPrime(i)) {
        console.log(i);
    }
}
